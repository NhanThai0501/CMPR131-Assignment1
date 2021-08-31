// menus.h

#include<iostream>
#include<string>
#include "optionTwo.h"

using namespace std;

void optionOneMenu(void);
void optionTwoMenu(void);
void optionThreeMenu(void);

void mainMenu(void)
{
    //Input menu options
    clearScreen();

    do
    {
        cout << "\n\tCMPR131 - Chapter 1 Software Development by (Members in team) (1/6/21)" << endl;
        cout << "\t" + string(70, char(205)) << endl;
        cout << "\t\t1> ASCII Text To ASCII Numbers" << endl;
        cout << "\t\t2> Base Converter" << endl;
        cout << "\t\t3> Descriptive Statistics" << endl;
        cout << "\t" + string(70, char(196)) << endl;
        cout << "\t\t0> exit" << endl;
        cout << "\t" + string(70, char(205)) << endl;

        do
        {
            int userInput = inputInteger("\t\tOption: ");
            switch (userInput)
            {
            case 0: clearScreen(); exit(1);  break;
            case 1: clearScreen(); optionOneMenu(); break;
            case 2: clearScreen(); optionTwoMenu(); break;
            case 3: clearScreen(); optionThreeMenu(); break;
            default: cout << "\tERROR-3A: Invalid input. Must be from 0..3."; break;
            }
            cout << "\n";
        } while (true);

    } while (true);
}

void optionOneMenu(void)
{
    //Input menu options
    cout << "\n\t\t1> ASCII Text To ASCII Numbers" << endl;
    cout << "\t\t" + string(70, char(205)) << endl;

    int number = NULL;

    do
    {
        //Display menu options
        cout << "\t\t\tA> Enter a text string" << endl;
        cout << "\t\t\tB> Convert the text string to ASCII numbers" << endl;
        cout << "\t\t\tC> Save the converted ASCII numbers into a binary file" << endl;
        cout << "\t\t\tD> Read the binary file" << endl;
        cout << "\t\t" + string(70, char(196));
        cout << "\n\t\t\t0> return" << endl;
        cout << "\t\t" + string(70, char(205));
        
        do
        {
            int option = inputChar("\n\t\t\tOption: ");

            switch (option)
            {
            case '0': mainMenu(); break;
            case 'a': case 'A': /*function here*/ optionOneMenu(); break;
            case 'b': case 'B': /*function here*/ optionOneMenu(); break;
            case 'c': case 'C': /*function here*/ optionOneMenu(); break;
            case 'd': case 'D': /*function here*/ optionOneMenu(); break;
            default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C', or 'D'"; continue;
            }
            cout << "\n";
        } while (true);
        
    } while (true);
}

void optionTwoMenu(void)
{
    //Input menu options
    clearScreen();
    cout << "\n\t\t2> Base Converter" << endl;
    cout << "\t\t" + string(70, char(205)) << endl;

    int number = NULL;

    do
    {
        //Display menu options
        cout << "\t\t\tA> Enter an integer number (base 10)" << endl;
        cout << "\t\t\tB> Specify and converting base" << endl;
        cout << "\t\t\tC> Display all converted bases (2..36)" << endl;
        cout << "\t\t" + string(70, char(196));
        cout << "\n\t\t\t0> return" << endl;
        cout << "\t\t" + string(70, char(205));

        do
        {
            int option = inputChar("\n\t\t\tOption: ");

            switch (option)
            {
            case '0': mainMenu(); break;
            case 'a': case 'A': number = inputInteger("\t Enter an integer number (base 10): "); optionTwoMenu(); break;
            case 'b': case 'B': convertOneBase(number); optionTwoMenu();  break;
            case 'c': case 'C': convertAllBase(number); optionTwoMenu();  break;
            default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B', or 'C'"; continue;
            }
            cout << "\n";
        } while (true);
        
    } while (true);
}

void optionThreeMenu(void)
{
    //Input menu options
    cout << "\n\t\t3> Descriptive Statistics" << endl;
    cout << "\t\t" + string(90, char(205)) << endl;

    do
    {
        //Display menu options
        cout << "\t\t\tA> Read data file, store into a sorted dynamic array and display the data set" << endl;
        cout << "\t\t\tB> Minimum                     M> Mid Range" << endl;
        cout << "\t\t\tC> Maximum                     N> Quartiles" << endl;
        cout << "\t\t\tD> Range                       O> Interquartile Range" << endl;
        cout << "\t\t\tE> Size                        P> Outliers" << endl;
        cout << "\t\t\tF> Sum                         Q> Sum of Squares" << endl;
        cout << "\t\t\tG> Mean                        R> Mean Absolute Deviation" << endl;
        cout << "\t\t\tH> Median                      S> Root Mean Square" << endl;
        cout << "\t\t\tI> Frequencies                 T> Standard Error of the Mean" << endl;
        cout << "\t\t\tJ> Mode                        U> Coefficient of Variation" << endl;
        cout << "\t\t\tK> Standard Deviation          V> Relative Standard Deviation" << endl;
        cout << "\t\t\tL> Variance" << endl;
        cout << "\t\t\tW> Display all results and write to an output text file" << endl;
        cout << "\t\t" + string(90, char(196));
        cout << "\n\t\t\t0> return" << endl;
        cout << "\t\t" + string(90, char(205));

        do
        {
            int option = inputChar("\n\t\t\tOption: ");

            switch (option)
            {
            case '0': mainMenu(); break;
            case 'a': case 'A': /*function here*/ optionThreeMenu(); break;
            case 'b': case 'B': /*function here*/ optionThreeMenu(); break;
            case 'c': case 'C': /*function here*/ optionThreeMenu(); break;
            case 'd': case 'D': /*function here*/ optionThreeMenu(); break;
            case 'e': case 'E': /*function here*/ optionThreeMenu(); break;
            case 'f': case 'F': /*function here*/ optionThreeMenu(); break;
            case 'g': case 'G': /*function here*/ optionThreeMenu(); break;
            case 'h': case 'H': /*function here*/ optionThreeMenu(); break;
            case 'i': case 'I': /*function here*/ optionThreeMenu(); break;
            case 'j': case 'J': /*function here*/ optionThreeMenu(); break;
            case 'k': case 'K': /*function here*/ optionThreeMenu(); break;
            case 'l': case 'L': /*function here*/ optionThreeMenu(); break;
            case 'm': case 'M': /*function here*/ optionThreeMenu(); break;
            case 'n': case 'N': /*function here*/ optionThreeMenu(); break;
            case 'o': case 'O': /*function here*/ optionThreeMenu(); break;
            case 'p': case 'P': /*function here*/ optionThreeMenu(); break;
            case 'q': case 'Q': /*function here*/ optionThreeMenu(); break;
            case 'r': case 'R': /*function here*/ optionThreeMenu(); break;
            case 's': case 'S': /*function here*/ optionThreeMenu(); break;
            case 't': case 'T': /*function here*/ optionThreeMenu(); break;
            case 'u': case 'U': /*function here*/ optionThreeMenu(); break;
            case 'v': case 'V': /*function here*/ optionThreeMenu(); break;
            case 'w': case 'W': /*function here*/ optionThreeMenu(); break;
            default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V', or 'W'"; continue;
            }
            cout << "\n";
        } while (true);

    } while (true);
}