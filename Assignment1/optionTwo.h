// optionTwo.h
#ifndef	OPTIONTWO_LOCK
#define OPTIONTWO_LOCK
#include "input.h"
#include <vector>

// Functions go here
void baseConverter(int number, int base)
{
    int quotient;
    if (number > 0)
        quotient = number;
    else
        quotient = -number;
    int remainder;
    string array[] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z" };
    vector<int> convertedNumber;
    while (quotient != 0)
    {
        remainder = quotient % base;
        quotient = quotient / base;
        convertedNumber.push_back(remainder);
    }
    int size = convertedNumber.size();
    if (number < 0)
        cout << "-";
    for (int i = size - 1; i >= 0; i--)
    {
        int temp = convertedNumber[i];
        cout << array[temp];
    }
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