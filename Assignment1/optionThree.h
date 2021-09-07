// optionThree.h

#ifndef	OPTIONTHREE_LOCK
#define OPTIONTHREE_LOCK

// optionThree.h
#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <ctime>
#include <cmath>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <map>
#include <numeric>
#include <list>
#include <forward_list>
#include <algorithm>
#include "input.h"

using namespace std;

// Function prototype
char menuOptionThree(char option);
void displayVectorElements(vector<int> v);
void section_A();
void section_B();
void section_C();
void section_D();
void section_E();
void section_F();
void section_G();
void section_H();
void section_I();
void section_J();
void section_K();
void section_L();
void section_M();
void section_N();
void section_O();
void section_P();
void section_Q();
void section_R();
void section_S();
void section_T();
void section_U();
void section_V();
void section_W();

#ifndef	OPTIONTHREE_LOCK
#define OPTIONTHREE_LOCK

// Functions go here
vector<int> dataset; // global vector which is used to store data file.

// Precondition: NA
// Postcondition: NA
void descriptive_statistics()
{
    do
    {
        char option = ' ';
        switch (menuOptionThree(option))
        {
        case '0': dataset.clear(); return; break;
        case 'A': section_A(); break;
        case 'B': section_B(); break;
        case 'C': section_C(); break;
        case 'D': section_D(); break;
        case 'E': section_E(); break;
        case 'F': section_F(); break;
        case 'G': section_G(); break;
        case 'H': section_H(); break;
        case 'I': section_I(); break;
        case 'J': section_J(); break;
        case 'K': section_K(); break;
        case 'L': section_L(); break;
        case 'M': section_M(); break;
        case 'N': section_N(); break;
        case 'O': section_O(); break;
        case 'P': section_P(); break;
        case 'Q': section_Q(); break;
        case 'R': section_R(); break;
        case 'S': section_S(); break;
        case 'T': section_T(); break;
        case 'U': section_U(); break;
        case 'V': section_V(); break;
        case 'W': section_W(); break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V', or 'W'\n"; break;
        }
        cout << "\n";

    } while (true);

}

// Precondition: valid char option
// Postcondition: return the option to run the program
char menuOptionThree(char option)
{
    cout << "\n\t\t\t 3> Descriptive Statistics";
    cout << "\n\t\t" + string(60, char(205));
    cout << "\n\t\t\t  A> Read data file, store into a sorted dynamic array and display the data set";
    cout << "\n\t\t\t  B> Minimum                     M> Mid Range";
    cout << "\n\t\t\t  C> Maximum                     N> Quartiles";
    cout << "\n\t\t\t  D> Range                       O> Interquartile Range";
    cout << "\n\t\t\t  E> Size                        P> Outliers";
    cout << "\n\t\t\t  F> Sum                         Q> Sum of Squares";
    cout << "\n\t\t\t  G> Mean                        R> Mean Absolute Deviation";
    cout << "\n\t\t\t  H> Median                      S> Root Mean Square";
    cout << "\n\t\t\t  I> Frequencies                 T> Standard Error of the Mean";
    cout << "\n\t\t\t  J> Mode                        U> Coefficient of Variation";
    cout << "\n\t\t\t  K> Standard Deviation          V> Relative Standard Deviation";
    cout << "\n\t\t\t  L> Variance";
    cout << "\n\t\t\t  W> Display all resultsand write to an output text file";
    cout << "\n\t\t" + string(60, char(196));
    cout << "\n\t\t\t  0. Quit";
    cout << "\n\t\t" + string(60, char(205));

    option = inputChar("\n\t\t\t  Option: ");

    return option;
}

// Read data file, store into a sorted dynamic array and display the data set
// Precondition: NA
// Postcondition: NA
void section_A()
{

    string fileName = inputString("\n\t\tEnter a data file name: ", false);
    float number;

    ifstream readFile;
    readFile.open(fileName);
    if (readFile.fail())
    {
        cout << "\n\t\tFile " << fileName << " cannot be found.\n";
        dataset.clear();
    }

    else
    {
        while (!readFile.eof())
        {
            readFile >> number;
            dataset.push_back(number);
            if (readFile.eof())
                break;
        }
        sort(dataset.begin(), dataset.end());

        cout << "\n\t\tData set with " << dataset.size() << " data: ";
        cout << "\n\t\t";
        displayVectorElements(dataset);
    }
    readFile.close();
}

// Minimum
// Precondition: NA
// Postcondition: NA
void section_B()
{

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        cout << "\n\t\tMinimum " << setw(40) << " = " << dataset[0];
    }
    cout << "\n";
    ofstream output;
    output.open("b.txt", ofstream::app);
    output << "\n\t\tMinimum " << setw(40) << " = " << dataset[0];
    output.close();

}

// Maximum
// Precondition: NA
// Postcondition: NA
void section_C()
{

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        cout << "\n\t\tMaximum " << setw(40) << " = " << dataset[dataset.size() - 1];
    }
    cout << "\n";
    ofstream output;
    output.open("b.txt", ofstream::app);
    output << "\n\t\tMaximum " << setw(40) << " = " << dataset[dataset.size() - 1];
    output.close();
}

// Range
// Precondition: NA
// Postcondition: NA
void section_D()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        cout << "\n\t\tRange " << setw(42) << " = " << dataset[dataset.size() - 1] - dataset[0];
    }
    cout << "\n";
}

// Size
// Precondition: NA
// Postcondition: NA
void section_E()
{

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {

        cout << "\n\t\tSize " << setw(43) << " = " << dataset.size();
    }
    cout << "\n";
}

// Sum
// Precondition: NA
// Postcondition: NA
void section_F()
{
    int sum = 0;

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        sum = accumulate(dataset.begin(), dataset.end(), 0);
        cout << "\n\t\tSum " << setw(44) << " = " << sum;
    }
    cout << "\n";
}

// Mean
// Precondition: NA
// Postcondition: NA
void section_G()
{
    float sum = 0;

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        sum = accumulate(dataset.begin(), dataset.end(), 0);

        cout << "\n\t\tMean " << setw(43) << " = " << (sum / dataset.size());
    }
    cout << "\n";
}

// Median
// Precondition: NA
// Postcondition: NA
void section_H()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        int median, index;
        float medianEven;
        // Check whether 'size' is odd or even to calculate 'median'
        if (dataset.size() % 2 != 0) // odd
        {
            index = (dataset.size() - 1) / 2;
            cout << "\n\t\tMedian " << setw(41) << " = " << dataset[index];
        }
        if (dataset.size() % 2 == 0) // even
        {
            index = dataset.size() / 2;
            medianEven = (dataset[index] + dataset[index - 1]) / 2.0;
            cout << "\n\t\tMedian " << setw(41) << " = " << medianEven;
        }
    }
    cout << "\n";
}

// Frequencies
// Precondition: NA
// Postcondition: NA
void section_I()
{

    if (dataset.size() == 0)
    {
        cout << "\n\t\tERROR: Data set is empty";
        return;
    }
    vector<int> frequency_vector;
    frequency_vector.resize(dataset[dataset.size() - 1] + 1);
    for (int i = 0; i < dataset.size(); i++)
    {
        frequency_vector.at(dataset[i]) += 1;
    }

    float frequency = accumulate(frequency_vector.begin(), frequency_vector.end(), 0);
    cout << "\n\t\tFrequency Table: ";
    cout << "\n\n\t\t\tValue" << "  Frequency" << " " << setw(5) << " " << setw(6) << "Frequency %";
    cout << "\n\t\t\t";

    for (int i = 0; i < frequency_vector.size(); i++)
    {
        if (frequency_vector.at(i) != 0)
        {
            cout << "\n\t\t\t";
            cout << i << setw(6) << frequency_vector[i] << setw(14) << " " << (frequency_vector[i] / frequency) * 100;
        }

    }
    cout << "\n";
}

// Mode
// Precondition: NA
// Postcondition: NA
void section_J()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        vector<int> mode_vector;
        mode_vector.resize(dataset[dataset.size() - 1] + 1);
        int maxCount = 1;

        for (int i = 0; i < dataset.size(); i++)
        {
            mode_vector.at(dataset[i]) += 1;
        }

        float mode = accumulate(mode_vector.begin(), mode_vector.end(), 0);

        // Calculate how many times the numbers appear in the vector
        for (int i = 0; i < mode_vector.size(); i++)
        {
            if (mode_vector[i] > maxCount)
            {
                maxCount = mode_vector[i];
            }
        }

        // Display the numbers that appear most in the vector
        cout << "\n\t\tMode " << setw(43) << " = ";
        for (int i = 0; i < mode_vector.size(); i++)
        {
            if (mode_vector[i] == maxCount)
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}


// Standard Deviation
// Precondition: NA
// Postcondition: NA
void section_K()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        float sum = 0;
        float mean = 0;
        float standard_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);

        cout << "\n\t\tStandard Deviation " << setw(29) << " = " << sqrt(standard_deviation / (dataset.size() - 1));
    }
    cout << "\n";
}

// Variance
// Precondition: NA
// Postcondition: NA
void section_L()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        float sum = 0;
        float mean = 0;
        float standard_deviation = 0;
        float variance = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);

        cout << "\n\t\tVariance " << setw(39) << " = " << static_cast<float>(pow(sqrt(standard_deviation / (dataset.size() - 1)), 2));
    }
    cout << "\n";
}

// Mid Range
// Precondition: NA
// Postcondition: NA
void section_M()
{

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        float midRange = (dataset[0] + dataset[dataset.size() - 1]) / 2.0;
        cout << "\n\t\tMid Range " << setw(38) << " = " << midRange;
    }
    cout << "\n";
}

// Quartiles
// Precondition: NA
// Postcondition: NA
void section_N()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        int index;
        float medianEven;
        cout << "\n\t\tQuartiles: ";

        //Special case for vector's size equal to 1
        if (dataset.size() == 1)
        {
            cout << "\n\n\t\tQ1 " << setw(41) << " = " << "unknown";
            cout << "\n\n\t\tQ2 " << setw(41) << " = " << dataset[0];
            cout << "\n\n\t\tQ3 " << setw(41) << " = " << "unknown";
        }

        //Special case for vector's size equal to 2 and 3
        else if (dataset.size() == 2)
        {
            index = dataset.size() / 2;
            medianEven = (dataset[index] + dataset[index - 1]) / 2.0;

            cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << "unknown";
            cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << medianEven;
            cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << "unknown";
        }

        else if (dataset.size() == 3)
        {
            index = (dataset.size() - 1) / 2;

            cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << "unknown";
            cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[index];
            cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << "unknown";
        }

        //Other case
        else
        {

            if (dataset.size() % 2 != 0) // odd
            {
                index = (dataset.size() - 1) / 2;

                int size_of_quartiles = (dataset.size() - 1) / 2;
                int index_of_quartiles;
                if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number in size
                {
                    index_of_quartiles = (size_of_quartiles - 1) / 2;
                    cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << dataset[index_of_quartiles];
                    cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[index];
                    cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << dataset[index_of_quartiles + size_of_quartiles + 1];
                }
                if (size_of_quartiles % 2 == 0) // if the first halfand second half after splitting has even number in size
                {
                    index_of_quartiles = size_of_quartiles / 2;
                    cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << ((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0;
                    cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[index];
                    cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << ((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0;
                }
            }

            if (dataset.size() % 2 == 0) // even
            {
                index = dataset.size() / 2;
                medianEven = (dataset[index] + dataset[index - 1]) / 2.0;

                int size_of_quartiles = dataset.size() / 2;
                int index_of_quartiles;

                if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number in size
                {
                    index_of_quartiles = (size_of_quartiles - 1) / 2;
                    cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << dataset[index_of_quartiles];
                    cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << medianEven;
                    cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << dataset[index_of_quartiles + size_of_quartiles];
                }

                if (size_of_quartiles % 2 == 0) // if the first half and second half after splitting has even number in size
                {
                    index_of_quartiles = size_of_quartiles / 2;
                    cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << ((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0;
                    cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << medianEven;
                    cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << ((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0;

                }
            }
        }
    }
    cout << "\n";
}

// Interquartile Range
// Precondition: NA
// Postcondition: NA
void section_O()
{

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {

        //Special case for vector's size equal to 2 and 3
        if (dataset.size() <= 3)
        {
            cout << "\n\t\tInterquartile Range " << setw(28) << " = " << "unknown";
        }
        else
        {
            int index, size_of_quartiles, index_of_quartiles;
            float medianEven;

            if (dataset.size() % 2 != 0) // odd
            {
                index = (dataset.size() - 1) / 2;
                size_of_quartiles = (dataset.size() - 1) / 2;

                if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number in size
                {
                    index_of_quartiles = (size_of_quartiles - 1) / 2;
                    cout << "\n\t\tInterquartile Range " << setw(28) << " = " << fixed << dataset[index_of_quartiles + size_of_quartiles + 1] - dataset[index_of_quartiles];
                }
                if (size_of_quartiles % 2 == 0) // if the first halfand second half after splitting has even number in size
                {
                    index_of_quartiles = size_of_quartiles / 2;
                    cout << "\n\t\tInterquartile Range " << setw(28) << " = " << fixed << (((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                }
            }

            if (dataset.size() % 2 == 0) // even
            {
                index = dataset.size() / 2;
                medianEven = (dataset[index] + dataset[index - 1]) / 2.0;
                size_of_quartiles = dataset.size() / 2;

                if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number in size
                {
                    index_of_quartiles = (size_of_quartiles - 1) / 2;
                    cout << "\n\t\tInterquartile Range " << setw(28) << " = " << fixed << dataset[index_of_quartiles + size_of_quartiles] - dataset[index_of_quartiles];
                }

                if (size_of_quartiles % 2 == 0) // if the first half and second half after splitting has even number in size
                {
                    index_of_quartiles = size_of_quartiles / 2;
                    cout << "\n\t\tInterquartile Range " << setw(28) << " = " << fixed << (((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);

                }

            }
        }
    }
    cout << "\n";
}

// Outliers
// Precondition: NA
// Postcondition: NA
void section_P()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        int index, size_of_quartiles, index_of_quartiles;
        float medianEven, outliers, upper_fence, lower_fence, interquartile_range;
        vector<int> outlier_numbers; // This vector will store numbers than are outside of upper fence and lower fence

        // Special case for vector's size less than or equal to 3
        if (dataset.size() <= 3)
        {
            cout << "\n\t\tOutliers " << setw(39) << " = " << "unknown";
        }

        // Normal cases
        else
        {
            if (dataset.size() % 2 != 0) // if the size of vector is odd number
            {
                index = (dataset.size() - 1) / 2;
                size_of_quartiles = (dataset.size() - 1) / 2;

                if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number 
                {
                    index_of_quartiles = (size_of_quartiles - 1) / 2;
                    interquartile_range = dataset[index_of_quartiles + size_of_quartiles + 1] - dataset[index_of_quartiles];
                    upper_fence = dataset[index_of_quartiles + size_of_quartiles + 1] + 1.5 * interquartile_range;
                    lower_fence = dataset[index_of_quartiles] - 1.5 * interquartile_range;

                    cout << "\n\t\tOutliers " << setw(39) << " = ";
                    for (int i = 0; i < dataset.size(); i++)
                    {
                        if (dataset[i] < lower_fence || dataset[i] > upper_fence)
                            outlier_numbers.push_back(dataset[i]);
                    }
                    if (outlier_numbers.empty())
                        cout << "none";
                    else
                    {
                        displayVectorElements(outlier_numbers);
                    }
                }
                if (size_of_quartiles % 2 == 0) // if the first halfand second half after splitting has even number
                {
                    index_of_quartiles = size_of_quartiles / 2;
                    interquartile_range = (((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                    upper_fence = dataset[index_of_quartiles + size_of_quartiles + 1] + 1.5 * interquartile_range;
                    lower_fence = dataset[index_of_quartiles] - 1.5 * interquartile_range;

                    cout << "\n\t\tOutliers " << setw(39) << " = ";
                    for (int i = 0; i < dataset.size(); i++)
                    {
                        if (dataset[i] < lower_fence || dataset[i] > upper_fence)
                            outlier_numbers.push_back(dataset[i]);
                    }
                    if (outlier_numbers.empty())
                        cout << "none";
                    else
                    {
                        for (int i = 0; i < outlier_numbers.size(); i++)
                            cout << outlier_numbers[i] << " ";
                    }
                }
            }

            if (dataset.size() % 2 == 0) // even
            {
                index = dataset.size() / 2;
                medianEven = (dataset[index] + dataset[index - 1]) / 2.0;
                size_of_quartiles = dataset.size() / 2;

                if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number
                {
                    index_of_quartiles = (size_of_quartiles - 1) / 2;
                    interquartile_range = dataset[index_of_quartiles + size_of_quartiles] - dataset[index_of_quartiles];
                    upper_fence = dataset[index_of_quartiles + size_of_quartiles + 1] + 1.5 * interquartile_range;
                    lower_fence = dataset[index_of_quartiles] - 1.5 * interquartile_range;
                    cout << "\n\t\tOutliers " << setw(39) << " = ";
                    for (int i = 0; i < dataset.size(); i++)
                    {
                        if (dataset[i] < lower_fence || dataset[i] > upper_fence)
                            outlier_numbers.push_back(dataset[i]);
                    }
                    if (outlier_numbers.empty())
                        cout << "none";
                    else
                    {
                        for (int i = 0; i < outlier_numbers.size(); i++)
                            cout << outlier_numbers[i] << " ";
                    }
                }

                if (size_of_quartiles % 2 == 0) // if the first half and second half after splitting has even number
                {
                    index_of_quartiles = size_of_quartiles / 2;
                    interquartile_range = (((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                    upper_fence = (((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0) + 1.5 * interquartile_range;
                    lower_fence = (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0) - 1.5 * interquartile_range;
                    cout << "\n\t\tOutliers " << setw(39) << " = ";
                    for (int i = 0; i < dataset.size(); i++)
                    {
                        if (dataset[i] < lower_fence || dataset[i] > upper_fence)
                            outlier_numbers.push_back(dataset[i]);
                    }
                    if (outlier_numbers.empty())
                        cout << "none";
                    else
                    {
                        for (int i = 0; i < outlier_numbers.size(); i++)
                            cout << outlier_numbers[i] << " ";
                    }
                }
            }
        }
    }
    cout << "\n";
}

// Sum of Squares
// Precondition: NA
// Postcondition: NA
void section_Q()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        float sum = 0;
        float mean = 0;
        float sum_of_squares = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
        {
            sum_of_squares += pow(dataset[i] - mean, 2);
        }
        cout << "\n\t\tSum of Squares " << setw(33) << " = " << sum_of_squares;
    }
    cout << "\n";
}

// Mean Absolute Deviation
// Precondition: NA
// Postcondition: NA
void section_R()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        float sum = 0;
        float mean = 0;
        float mean_abs_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
        {
            mean_abs_deviation += abs((dataset[i] - mean));
        }
        cout << "\n\t\tMean Absolute Deviation " << setw(24) << " = " << mean_abs_deviation / dataset.size();
    }
    cout << "\n";
}

// Root Mean Square
// Precondition: NA
// Postcondition: NA
void section_S()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        float sum = 0;
        float sum_of_each_square = 0;
        float root_mean_square = 0;

        for (int i = 0; i < dataset.size(); i++)
            sum_of_each_square += pow(dataset[i], 2);

        root_mean_square = sum_of_each_square;
        root_mean_square = sum_of_each_square / dataset.size();
        root_mean_square = sqrt(sum_of_each_square / dataset.size());

        cout << "\n\t\tRoot Mean Square " << setw(31) << " = " << sqrt(sum_of_each_square / dataset.size());
    }
    cout << "\n";
}

// Standard Error of the Mean
// Precondition: NA
// Postcondition: NA
void section_T()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        float sum = 0;
        float mean = 0;
        float standard_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);

        cout << "\n\t\tStandard Error of the Mean " << setw(21) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / sqrt(dataset.size());
    }
    cout << "\n";
}

// Coefficient of Variation
// Precondition: NA
// Postcondition: NA
void section_U()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        float sum = 0;
        float mean = 0;
        float standard_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);

        cout << "\n\t\tCoefficient of Variation " << setw(23) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / mean;
    }
    cout << "\n";
}

// Relative Standard Deviation
// Precondition: NA
// Postcondition: NA
void section_V()
{
    if (dataset.size() == 0)
    {
        cout << "\n\t\tERROR: Data set is empty";
    }
    else
    {
        float sum = 0;
        float mean = 0;
        float standard_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);
        float relativeStandardDeviation = (sqrt(standard_deviation / (dataset.size() - 1)) / mean) * 100;


        cout << "\n\t\tRelative Standard Deviation " << setw(20) << " = " << (sqrt(standard_deviation / (dataset.size() - 1)) / mean) * 100 << " % ";

    }
    cout << "\n";

}

// Precondition: NA
// Postcondition: NA
void sknewness_kurtosis_kurtosisExcess()
{
    float standard_deviation = 0;

    float sum = accumulate(dataset.begin(), dataset.end(), 0);

    float mean = 0;
    mean = sum / dataset.size();

    for (int i = 0; i < dataset.size(); i++)
    {
        standard_deviation += pow(dataset[i] - mean, 2);
    }

    float skewness = 0;
    float skewness_First = 0;
    float skewness_Second = 0;
    float decimal = 1.0;
    float kurtosis = 0;
    float kurtosis_First = 0;
    float kurtosis_Second = 0;
    float kurtosis_excess = 0;
    float kurtosis_excess_First = 0;
    float kurtosis_excess_Second = 0;
    float kurtosis_excess_Third = 0;

    if (dataset.size() < 3)
    {
        cout << "\n\t\tSknewness " << setw(38) << " = " << "unknown";
        cout << "\n\n\t\tKurtosis " << setw(39) << " = " << "unknown";
        cout << "\n\n\t\tKurtosis Excess " << setw(32) << " = " << "unknown";
    }
    else if (dataset.size() == 3)
    {
        skewness_First = (dataset.size() * decimal / (((dataset.size() - 1) * decimal) * (dataset.size() - 2) * decimal));
        for (int i = 0; i < dataset.size(); i++)
            skewness_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 3);
        skewness = skewness_First * skewness_Second;

        cout << "\n\t\tSknewness " << setw(38) << " = " << skewness;
        cout << "\n\n\t\tKurtosis " << setw(39) << " = " << "unknown";
        cout << "\n\n\t\tKurtosis Excess " << setw(32) << " = " << "unknown\n";
    }
    else
    {
        skewness_First = (dataset.size() * decimal / (((dataset.size() - 1) * decimal) * (dataset.size() - 2) * decimal));
        for (int i = 0; i < dataset.size(); i++)
            skewness_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 3);
        skewness = skewness_First * skewness_Second;


        kurtosis_First = ((dataset.size() * decimal) * ((dataset.size() + 1) * decimal)) / (((dataset.size() - 1) * decimal * (dataset.size() - 2) * decimal * (dataset.size() - 3) * decimal));
        for (int i = 0; i < dataset.size(); i++)
            kurtosis_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 4);

        kurtosis = kurtosis_First * kurtosis_Second;

        kurtosis_excess_First = kurtosis_First;
        for (int i = 0; i < dataset.size(); i++)
            kurtosis_excess_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 4);
        kurtosis_excess_Third = (3.0 * (pow(dataset.size() - 1, 2))) / ((dataset.size() - 2) * decimal * (dataset.size() - 3) * decimal);
        kurtosis_excess = kurtosis_First * kurtosis_excess_Second - kurtosis_excess_Third;

        cout << "\n\t\tSknewness " << setw(38) << " = " << skewness;
        cout << "\n\n\t\tKurtosis " << setw(39) << " = " << kurtosis;
        cout << "\n\n\t\tKurtosis Excess " << setw(32) << " = " << kurtosis_excess << "\n";
    }
}

// Display all results and write to an output text file
// Precondition: NA
// Postcondition: NA
void section_W()
{
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        cout << "\n\t\tDescriptive Statistics: ";
        cout << "\n\n\t\tData set with " << dataset.size() << " data: ";
        displayVectorElements(dataset);
        section_B();
        section_C();
        section_D();
        section_E();
        section_F();
        section_G();
        section_H();
        section_J();
        section_K();
        section_L();
        section_M();
        section_N();
        section_O();
        section_P();
        section_Q();
        section_R();
        section_S();
        section_T();
        sknewness_kurtosis_kurtosisExcess();
        section_U();
        section_V();
        section_I();

        // Write data into an output file
        string fileName = inputString("\n\t\tEnter an output file name: ", false);
        ofstream outputFile;
        outputFile.open(fileName);
        if (outputFile.fail())
        {
            cout << "Error: File " << fileName << " cannot be opened.\n";
        }
        else
        {
            outputFile << "\n\t\tDescriptive Statistics: ";
            outputFile << "\n\n\t\tData set with " << dataset.size() << " data: ";
            outputFile << "\n\t\t";
            for (int i = 0; i < dataset.size(); i++)
            {

                outputFile << dataset[i] << " ";
            }

            float sum = accumulate(dataset.begin(), dataset.end(), 0);
            outputFile << "\n\n\t\tMinimum " << setw(40) << " = " << dataset[0];
            outputFile << "\n\n\t\tMaximum " << setw(40) << " = " << dataset[dataset.size() - 1];
            outputFile << "\n\n\t\tRange " << setw(42) << " = " << dataset[dataset.size() - 1] - dataset[0];
            outputFile << "\n\n\t\tSize " << setw(43) << " = " << dataset.size();
            outputFile << "\n\n\t\tSum " << setw(44) << " = " << sum;
            outputFile << "\n\n\t\tMean " << setw(43) << " = " << static_cast<float>(sum / dataset.size());
            int median, index;
            float medianEven;
            // Check whether 'size' is odd or even to calculate 'median'
            if (dataset.size() % 2 != 0) // odd
            {
                index = (dataset.size() - 1) / 2;
                outputFile << "\n\n\t\tMedian " << setw(41) << " = " << dataset[index];
            }
            if (dataset.size() % 2 == 0) // even
            {
                index = dataset.size() / 2;
                medianEven = static_cast<float>((dataset[index] + dataset[index - 1])) / 2.0;
                outputFile << "\n\n\t\tMedian " << setw(41) << " = " << medianEven;
            }

            vector<int> mode_vector;
            mode_vector.resize(dataset[dataset.size() - 1] + 1);
            int maxCount = 1;

            for (int i = 0; i < dataset.size(); i++)
            {
                mode_vector.at(dataset[i]) += 1;
            }

            float mode = accumulate(mode_vector.begin(), mode_vector.end(), 0);
            outputFile << "\n\t\t\t";

            // Calculate how many times the numbers appear in the vector
            for (int i = 0; i < mode_vector.size(); i++)
            {
                if (mode_vector[i] > maxCount)
                {
                    maxCount = mode_vector[i];
                }
            }

            // Display the numbers that appear most in the vector
            outputFile << "\n\t\tMode " << setw(43) << " = ";
            for (int i = 0; i < mode_vector.size(); i++)
            {
                if (mode_vector[i] == maxCount)
                {
                    outputFile << i << " ";
                }
            }

            float standard_deviation = 0;

            sum = accumulate(dataset.begin(), dataset.end(), 0);

            float mean = 0;
            mean = sum / dataset.size();

            for (int i = 0; i < dataset.size(); i++)
            {
                standard_deviation += pow(dataset[i] - mean, 2);
            }
            outputFile << "\n\n\t\tStandard Deviation " << setw(29) << " = " << sqrt(standard_deviation / (dataset.size() - 1));
            outputFile << "\n\n\t\tVariance " << setw(39) << " = " << pow(sqrt(standard_deviation / (dataset.size() - 1)), 2);
            outputFile << "\n\n\t\tMid Range " << setw(38) << " = " << (dataset[0] + dataset[dataset.size() - 1]) / 2.0;

            int size_of_quartiles, index_of_quartiles;
            float upper_fence, lower_fence, interquartile_range;
            vector<int> outlier_numbers;

            // Special case if vector's size = 1
            if (dataset.size() == 1)
            {
                outputFile << "\n\n\t\tQuartiles: ";
                outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << "unknown";
                outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[0];
                outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << "unknown";
                outputFile << "\n\n\t\tInterquartile Range " << setw(38) << " = " << "unknown";
                outputFile << "\n\n\t\tOutliers " << setw(38) << " = " << "unknown";
            }
            else if (dataset.size() <= 3)
            {
                outputFile << "\n\n\t\tQuartiles: ";
                outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << "unknown";
                outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[1];
                outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << "unknown";
                outputFile << "\n\n\t\tInterquartile Range " << setw(28) << " = " << "unknown";
                outputFile << "\n\n\t\tOutliers " << setw(39) << " = " << "unknown";
            }

            // Normal case
            else
            {
                if (dataset.size() % 2 != 0) // odd
                {
                    index = (dataset.size() - 1) / 2;
                    size_of_quartiles = (dataset.size() - 1) / 2;
                    if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number 
                    {
                        index_of_quartiles = (size_of_quartiles - 1) / 2;
                        interquartile_range = dataset[index_of_quartiles + size_of_quartiles + 1] - dataset[index_of_quartiles];
                        upper_fence = dataset[index_of_quartiles + size_of_quartiles + 1] + 1.5 * interquartile_range;
                        lower_fence = dataset[index_of_quartiles] - 1.5 * interquartile_range;
                        outputFile << "\n\n\t\tQuartiles: ";
                        outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << dataset[index_of_quartiles];
                        outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[index];
                        outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << dataset[index_of_quartiles + size_of_quartiles + 1];
                        outputFile << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << dataset[index_of_quartiles + size_of_quartiles + 1] - dataset[index_of_quartiles];
                        outputFile << "\n\n\t\tOutliers " << setw(39) << " = ";
                        for (int i = 0; i < dataset.size(); i++)
                        {
                            if (dataset[i] < lower_fence || dataset[i] > upper_fence)
                                outlier_numbers.push_back(dataset[i]);
                        }
                        if (outlier_numbers.empty())
                            outputFile << "none";
                        else
                        {
                            displayVectorElements(outlier_numbers);
                        }
                    }
                    if (size_of_quartiles % 2 == 0) // if the first halfand second half after splitting has even number
                    {
                        index_of_quartiles = size_of_quartiles / 2;
                        interquartile_range = (((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                        upper_fence = dataset[index_of_quartiles + size_of_quartiles + 1] + 1.5 * interquartile_range;
                        lower_fence = dataset[index_of_quartiles] - 1.5 * interquartile_range;
                        outputFile << "\n\n\t\tQuartiles: ";
                        outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << ((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0;
                        outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[index];
                        outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << ((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0;
                        outputFile << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << (((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                        outputFile << "\n\n\t\tOutliers " << setw(39) << " = ";
                        for (int i = 0; i < dataset.size(); i++)
                        {
                            if (dataset[i] < lower_fence || dataset[i] > upper_fence)
                                outlier_numbers.push_back(dataset[i]);
                        }
                        if (outlier_numbers.empty())
                            outputFile << "none";
                        else
                        {
                            displayVectorElements(outlier_numbers);
                        }
                    }
                }

                if (dataset.size() % 2 == 0) // even
                {
                    index = dataset.size() / 2;
                    medianEven = static_cast<float>((dataset[index] + dataset[index - 1])) / 2.0;

                    size_of_quartiles = dataset.size() / 2;
                    index_of_quartiles;

                    if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number
                    {
                        index_of_quartiles = (size_of_quartiles - 1) / 2;
                        interquartile_range = dataset[index_of_quartiles + size_of_quartiles] - dataset[index_of_quartiles];
                        upper_fence = dataset[index_of_quartiles + size_of_quartiles] + 1.5 * interquartile_range;
                        lower_fence = dataset[index_of_quartiles] - 1.5 * interquartile_range;
                        outputFile << "\n\n\t\tQuartiles: ";
                        outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << dataset[index_of_quartiles];
                        outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << medianEven;
                        outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << dataset[index_of_quartiles + size_of_quartiles];
                        outputFile << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << dataset[index_of_quartiles + size_of_quartiles] - dataset[index_of_quartiles];
                        outputFile << "\n\n\t\tOutliers " << setw(39) << " = ";
                        for (int i = 0; i < dataset.size(); i++)
                        {
                            if (dataset[i] < lower_fence || dataset[i] > upper_fence)
                                outlier_numbers.push_back(dataset[i]);
                        }
                        if (outlier_numbers.empty())
                            outputFile << "none";
                        else
                        {
                            displayVectorElements(outlier_numbers);
                        }
                    }

                    if (size_of_quartiles % 2 == 0) // if the first half and second half after splitting has even number
                    {
                        index_of_quartiles = size_of_quartiles / 2;
                        interquartile_range = (((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                        upper_fence = ((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0 + 1.5 * interquartile_range;
                        lower_fence = ((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0 - 1.5 * interquartile_range;
                        outputFile << "\n\n\t\tQuartiles: ";
                        outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << ((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0;
                        outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << medianEven;
                        outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << ((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0;
                        outputFile << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << (((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                        outputFile << "\n\n\t\tOutliers " << setw(39) << " = ";
                        for (int i = 0; i < dataset.size(); i++)
                        {
                            if (dataset[i] < lower_fence || dataset[i] > upper_fence)
                                outlier_numbers.push_back(dataset[i]);
                        }
                        if (outlier_numbers.empty())
                            outputFile << "none";
                        else
                        {
                            displayVectorElements(outlier_numbers);
                        }
                    }

                }
            }


            float sum_of_squares = 0;
            for (int i = 0; i < dataset.size(); i++)
            {
                sum_of_squares += pow(dataset[i] - mean, 2);
            }
            outputFile << "\n\n\t\tSum of Squares " << setw(33) << " = " << sum_of_squares;

            float mean_abs_deviation = 0;
            for (int i = 0; i < dataset.size(); i++)
            {
                mean_abs_deviation += abs((dataset[i] - mean));
            }
            outputFile << "\n\n\t\tMean Absolute Deviation " << setw(24) << " = " << mean_abs_deviation / dataset.size();
            float sum_of_each_square = 0;
            float root_mean_square = 0;

            for (int i = 0; i < dataset.size(); i++)
                sum_of_each_square += pow(dataset[i], 2);

            outputFile << "\n\n\t\tRoot Mean Square " << setw(31) << " = " << sqrt(sum_of_each_square / dataset.size());
            outputFile << "\n\n\t\tStandard Error of the Mean " << setw(21) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / sqrt(dataset.size());

            float skewness = 0;
            float skewness_First = 0;
            float skewness_Second = 0;
            float decimal = 1.0;
            float kurtosis = 0;
            float kurtosis_First = 0;
            float kurtosis_Second = 0;
            float kurtosis_excess = 0;
            float kurtosis_excess_First = 0;
            float kurtosis_excess_Second = 0;
            float kurtosis_excess_Third = 0;

            if (dataset.size() < 3)
            {
                outputFile << "\n\n\t\tSknewness " << setw(38) << " = " << "unknown";
                outputFile << "\n\n\t\tKurtosis " << setw(39) << " = " << "unknown";
                outputFile << "\n\n\t\tKurtosis Excess " << setw(32) << " = " << "unknown";
            }
            else if (dataset.size() == 3)
            {
                skewness_First = (dataset.size() * decimal / (((dataset.size() - 1) * decimal) * (dataset.size() - 2) * decimal));
                for (int i = 0; i < dataset.size(); i++)
                    skewness_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 3);
                skewness = skewness_First * skewness_Second;

                outputFile << "\n\n\t\tSknewness " << setw(38) << " = " << skewness;
                outputFile << "\n\n\t\tKurtosis " << setw(39) << " = " << "unknown";
                outputFile << "\n\n\t\tKurtosis Excess " << setw(32) << " = " << "unknown";
            }
            else
            {
                skewness_First = (dataset.size() * decimal / (((dataset.size() - 1) * decimal) * (dataset.size() - 2) * decimal));
                for (int i = 0; i < dataset.size(); i++)
                    skewness_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 3);
                skewness = skewness_First * skewness_Second;


                kurtosis_First = ((dataset.size() * decimal) * ((dataset.size() + 1) * decimal)) / (((dataset.size() - 1) * decimal * (dataset.size() - 2) * decimal * (dataset.size() - 3) * decimal));
                for (int i = 0; i < dataset.size(); i++)
                    kurtosis_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 4);

                kurtosis = kurtosis_First * kurtosis_Second;

                kurtosis_excess_First = kurtosis_First;
                for (int i = 0; i < dataset.size(); i++)
                    kurtosis_excess_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 4);
                kurtosis_excess_Third = (3.0 * (pow(dataset.size() - 1, 2))) / ((dataset.size() - 2) * decimal * (dataset.size() - 3) * decimal);
                kurtosis_excess = kurtosis_First * kurtosis_excess_Second - kurtosis_excess_Third;

                outputFile << "\n\n\t\tSknewness " << setw(38) << " = " << skewness;
                outputFile << "\n\n\t\tKurtosis " << setw(39) << " = " << kurtosis;
                outputFile << "\n\n\t\tKurtosis Excess " << setw(32) << " = " << kurtosis_excess;
            }

            outputFile << "\n\n\t\tCoefficient of Variation " << setw(23) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / mean;
            outputFile << "\n\n\t\tRelative Standard Deviation " << setw(20) << " = " << (sqrt(standard_deviation / (dataset.size() - 1)) / mean) * 100 << " % ";

            vector<int> frequency_vector;
            frequency_vector.resize(dataset[dataset.size() - 1] + 1);
            for (int i = 0; i < dataset.size(); i++)
            {
                frequency_vector.at(dataset[i]) += 1;
            }

            float frequency = accumulate(frequency_vector.begin(), frequency_vector.end(), 0);
            outputFile << "\n\n\t\tFrequency Table: ";
            outputFile << "\n\n\t\t\tValue          Frequency         Frequency %";
            outputFile << "\n\n\t\t\t";

            for (int i = 0; i < frequency_vector.size(); i++)
            {
                if (frequency_vector.at(i) != 0)
                {
                    outputFile << "\n\t\t\t";
                    outputFile << i << setw(14) << frequency_vector[i] << setw(18) << " " << static_cast<float>((frequency_vector[i] / frequency) * 100);
                }
            }

        }

        outputFile.close();

        cout << "\n\n\t\tFile " << fileName << " has been created.\n";
    }
}

// Additional functions 

// Precondition: valid vector with integer type
// Postcondition: display all elements in vector
void displayVectorElements(vector<int> v)
{
    cout << "\n\t\t";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

#endif
