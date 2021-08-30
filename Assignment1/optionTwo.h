// optionTwo.h
#ifndef	OPTIONTWO_LOCK
#define OPTIONTWO_LOCK
#include "input.h"
#include <vector>

// Functions go here
void baseConverter(int number, int base)
{
    int quotient = number;
    int remainder;
    vector<int> convertedNumber;
    while (quotient != 0)
    {
        remainder = quotient % base;
        quotient = quotient / base;
        convertedNumber.push_back(remainder);
    }
    int size = convertedNumber.size();
    for (int i = size - 1; i >= 0; i--)
        cout << convertedNumber[i];
    cout << " (base of " << base << ")" << endl;
}
void convertOneBase(int number)
{
    if (!number)
        cout << "ERROR: No input integer has been entered." << endl;
    else
    {
        int base = inputInteger("\t Enter the base (2..36) to convert to: ", 2, 36);
        cout << "\t\t" << number << " (base of 10) = ";
        baseConverter(number, base);
    }
}
void convertAllBase(int number)
{
    if (!number)
        cout << "ERROR: No input integer has been entered." << endl;
    else
    {
        cout << "\t\t" << number << " (base of 10) = " << endl;
        for (int i = 2; i <= 36; i++)
        {
            cout << "\t\t\t";
            baseConverter(number, i);
        }
    }
}

#endif