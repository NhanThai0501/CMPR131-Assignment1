// main.cpp

// Team: 
// Chapter 1: Software Development.
// 08/28/2021

#include <iostream>
#include <string>
#include "menus.h"
#include "input.h"
#include "optionOne.h"
#include "optionTwo.h"
#include "optionThree.h"

void mainMenu(void);
void programOne(void);
void programTwo(void);
void programThree(void);

int main(void) 
{
    mainMenu();
    return EXIT_SUCCESS;
}

void mainMenu(void)
{
    clearScreen();

    displayMainMenu();

    do
    {
        int userInput = inputInteger("\t\tOption: ");
        switch (userInput)
        {
        case 0: clearScreen(); exit(1);  break;
        case 1: clearScreen(); programOne(); break;
        case 2: clearScreen(); programTwo(); break;
        case 3: clearScreen(); programThree(); break;
        default: cout << "\tERROR-3A: Invalid input. Must be from 0..3."; break;
        }
    } while (true);
}

void programOne(void)
{
    string userStringInput = "";
    string asciiString = "";

    displayOptionOneMenu();

    do
    {
        int option = inputChar("\n\t\t\tOption: ");

        switch (option)
        {
        case '0': mainMenu(); break;
        case 'a': case 'A': userStringInput = inputString("\n\t\t\tEnter a text line: ", true);
                            displayOptionOneMenu(); break;
        case 'b': case 'B': asciiString = asciiConverter(userStringInput); 
                            cout << "\n\t\t\tConverted to ASCII numbers:" << endl;
                            cout << "\t\t\t" + asciiString << endl; displayOptionOneMenu(); break;
        case 'c': case 'C': saveToFile(asciiString);
                            cout << "\n\t\t\tFile, test.bin, has been written and saved." << endl;
                            displayOptionOneMenu(); break;
        case 'd': case 'D': cout << "\n\t\t\tReading file, test.bin...";
                            cout << "\n\t\t\t" + readFromFile() << endl;
                            displayOptionOneMenu(); break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C', or 'D'"; continue;
        }
    } while (true);
}

void programTwo(void)
{
    int number = NULL;

    displayOptionTwoMenu();

    do
    {
        char option = inputChar("\n\t\t\tOption: ");

        switch (option)
        {
        case '0': mainMenu(); break;
        case 'a': case 'A': number = inputInteger("\t Enter an integer number (base 10): "); displayOptionTwoMenu(); break;
        case 'b': case 'B': convertOneBase(number); displayOptionTwoMenu();  break;
        case 'c': case 'C': convertAllBase(number); displayOptionTwoMenu();  break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B', or 'C'"; continue;
        }
    } while (true);
}

void programThree(void)
{
    displayOptionThreeMenu();

    do
    {
        char option = inputChar("\n\t\t\tOption: ");

        switch (option)
        {
        case '0': mainMenu(); break;
        case 'a': case 'A': /*function here*/ displayOptionThreeMenu(); break;
        case 'b': case 'B': /*function here*/ displayOptionThreeMenu(); break;
        case 'c': case 'C': /*function here*/ displayOptionThreeMenu(); break;
        case 'd': case 'D': /*function here*/ displayOptionThreeMenu(); break;
        case 'e': case 'E': /*function here*/ displayOptionThreeMenu(); break;
        case 'f': case 'F': /*function here*/ displayOptionThreeMenu(); break;
        case 'g': case 'G': /*function here*/ displayOptionThreeMenu(); break;
        case 'h': case 'H': /*function here*/ displayOptionThreeMenu(); break;
        case 'i': case 'I': /*function here*/ displayOptionThreeMenu(); break;
        case 'j': case 'J': /*function here*/ displayOptionThreeMenu(); break;
        case 'k': case 'K': /*function here*/ displayOptionThreeMenu(); break;
        case 'l': case 'L': /*function here*/ displayOptionThreeMenu(); break;
        case 'm': case 'M': /*function here*/ displayOptionThreeMenu(); break;
        case 'n': case 'N': /*function here*/ displayOptionThreeMenu(); break;
        case 'o': case 'O': /*function here*/ displayOptionThreeMenu(); break;
        case 'p': case 'P': /*function here*/ displayOptionThreeMenu(); break;
        case 'q': case 'Q': /*function here*/ displayOptionThreeMenu(); break;
        case 'r': case 'R': /*function here*/ displayOptionThreeMenu(); break;
        case 's': case 'S': /*function here*/ displayOptionThreeMenu(); break;
        case 't': case 'T': /*function here*/ displayOptionThreeMenu(); break;
        case 'u': case 'U': /*function here*/ displayOptionThreeMenu(); break;
        case 'v': case 'V': /*function here*/ displayOptionThreeMenu(); break;
        case 'w': case 'W': /*function here*/ displayOptionThreeMenu(); break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V', or 'W'"; continue;
        }
    } while (true);
}