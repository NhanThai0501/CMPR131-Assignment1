// menus.h

#include <iostream>
#include <string>

using namespace std;

void displayMainMenu(void)
{
    cout << "\n\tCMPR131 - Chapter 1 Software Development by (Members in team) (1/6/21)" << endl;
    cout << "\t" + string(70, char(205)) << endl;
    cout << "\t\t1> ASCII Text To ASCII Numbers" << endl;
    cout << "\t\t2> Base Converter" << endl;
    cout << "\t\t3> Descriptive Statistics" << endl;
    cout << "\t" + string(70, char(196)) << endl;
    cout << "\t\t0> exit" << endl;
    cout << "\t" + string(70, char(205)) << endl;
}

void displayOptionOneMenu(void)
{
    cout << "\n\t\t1> ASCII Text To ASCII Numbers" << endl;
    cout << "\t\t" + string(70, char(205)) << endl;
    cout << "\t\t\tA> Enter a text string" << endl;
    cout << "\t\t\tB> Convert the text string to ASCII numbers" << endl;
    cout << "\t\t\tC> Save the converted ASCII numbers into a binary file" << endl;
    cout << "\t\t\tD> Read the binary file" << endl;
    cout << "\t\t" + string(70, char(196));
    cout << "\n\t\t\t0> return" << endl;
    cout << "\t\t" + string(70, char(205));
}

void displayOptionTwoMenu(void)
{
    cout << "\n\t\t2> Base Converter" << endl;
    cout << "\t\t" + string(70, char(205)) << endl;
    cout << "\t\t\tA> Enter an integer number (base 10)" << endl;
    cout << "\t\t\tB> Specify and converting base" << endl;
    cout << "\t\t\tC> Display all converted bases (2..36)" << endl;
    cout << "\t\t" + string(70, char(196));
    cout << "\n\t\t\t0> return" << endl;
    cout << "\t\t" + string(70, char(205));
}

void displayOptionThreeMenu(void)
{
    cout << "\n\t\t3> Descriptive Statistics" << endl;
    cout << "\t\t" + string(90, char(205)) << endl;
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
}