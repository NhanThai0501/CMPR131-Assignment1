// menus.h

#include<iostream>
#include<string>
#include "optionTwo.h"

using namespace std;

// functions go here
void optionTwoMenus();
void mainMenus()
{
    //Input menu options
    clearScreen();

    do
    {
        cout << "\n\t\t CMPR121 Chapter 1: Software Development by Team" << endl;
        cout << string(100, char(205)) << endl;
        cout << "\t\t 1. ASCII Text To ASCII Numbers" << endl;
        cout << "\t\t 2. Base Converter" << endl;
        cout << "\t\t 3. Descriptive Statistics" << endl;
        cout << string(100, char(196)) << endl;
        cout << "\t\t 0. Quit" << endl;
        cout << string(100, char(196)) << endl;
        cout << endl;
        int userInput = inputInteger("\t\t Option: ", 0, 3);
        switch (userInput)
        {
        case 0: exit(1); break;
            // case 1: Option1(); break;
        case 2: optionTwoMenus(); break;
            //  case 3: Option3(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        pause("Press Enter key to continue . . .");

    } while (true);
}
void optionTwoMenus()
{
    //Input menu options
    clearScreen();
    cout << "2. Base Converter" << endl;
    cout << string(100, char(205)) << endl;
    int number = NULL;
    do
    {
        //Display menu options
        cout << "\n\t 1. Enter an integer number (base 10)" << endl;
        cout << "\t 2. Specify and converting base" << endl;
        cout << "\t 3. Display all converted bases (2..36)" << endl;
        cout << string(100, char(196)) << endl;
        cout << "\t 0. Return" << endl;
        cout << string(100, char(205)) << endl;
        int option = inputInteger("\t Option: ", 0, 3);

        switch (option)
        {
        case 0: mainMenus(); break;
        case 1: number = inputInteger("\t Enter an integer number (base 10): ");  break;
        case 2: convertOneBase(number); break;
        case 3: convertAllBase(number); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
    } while (true);
}