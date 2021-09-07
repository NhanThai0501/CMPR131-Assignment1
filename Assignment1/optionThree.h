// optionThree.h

#ifndef	OPTIONTHREE_LOCK
#define OPTIONTHREE_LOCK

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
void descriptive_statistics()
{
    do
    {
        //system("cls");
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
        //system("pause");

    } while (true);

}

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

    //cout << "\n\t\t\t  Option: ";
    option = inputChar("\n\t\t\t  Option: ");

    return option;
}


// Read data file, store into a sorted dynamic array and display the data set
void section_A()
{
    cout << "\n\t\tSection A is running\n";

    string fileName = inputString("\n\t\tEnter a data file name: ", false);
    double number;

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
void section_B()
{
    cout << "\n\t\tSection B is running\n";

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        cout << "\n\t\tMinimum " << setw(40) << " = " << dataset[0];
    }

}

// Maximum
void section_C()
{
    cout << "\n\t\tSection C is running\n";

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        cout << "\n\t\tMaximum " << setw(40) << " = " << dataset[dataset.size() - 1];
    }
}

// Range
void section_D()
{
    cout << "\n\t\tSection D is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        cout << "\n\t\tRange " << setw(42) << " = " << dataset[dataset.size() - 1] - dataset[0];
    }
}

// Size
void section_E()
{
    cout << "\n\t\tSection E is running\n";

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {

        cout << "\n\t\tSize " << setw(43) << " = " << dataset.size();
    }
}

// Sum
void section_F()
{
    cout << "\n\t\tSection F is running\n";
    int sum = 0;

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        sum = accumulate(dataset.begin(), dataset.end(), 0);
        cout << "\n\t\tSum " << setw(44) << " = " << sum;
    }
}

// Mean
void section_G()
{
    cout << "\n\t\tSection G is running\n";
    float sum = 0;

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        sum = accumulate(dataset.begin(), dataset.end(), 0);

        cout << "\n\t\tMean " << setw(43) << " = " << (sum / dataset.size());
    }
}

// Median
void section_H()
{
    cout << "\n\t\tSection H is running\n";
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
}

// Frequencies
void section_I()
{
    cout << "\n\t\tSection I is running\n";

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

    double frequency = accumulate(frequency_vector.begin(), frequency_vector.end(), 0);
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

}

// Mode
void section_J()
{
    cout << "\n\t\tSection J is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        vector<int> mode_vector;
        mode_vector.resize(dataset[dataset.size() - 1] + 1);
        for (int i = 0; i < dataset.size(); i++)
        {
            mode_vector.at(dataset[i]) += 1;
        }
        int maxCount = 1;
        double mode = accumulate(mode_vector.begin(), mode_vector.end(), 0);
        cout << "\n\t\t\t";

        // Calculate how many times the numbers appear in the vector
        for (int i = 0; i < mode_vector.size(); i++)
        {
            if (mode_vector.at(i) > maxCount)
            {
                maxCount++;
            }
        }

        // Display the numbers that appear most in the vector
        cout << "\n\n\t\tMode " << setw(42) << " = ";
        for (int i = 0; i < mode_vector.size(); i++)
        {
            if (mode_vector.at(i) == maxCount)
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}

// Standard Deviation
void section_K()
{
    cout << "\n\t\tSection K is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        double sum = 0;
        double mean = 0;
        double standard_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);

        cout << "\n\t\tStandard Deviation " << setw(29) << " = " << sqrt(standard_deviation / (dataset.size() - 1));
    }
}

// Variance
void section_L()
{
    cout << "\n\t\tSection L is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        double sum = 0;
        double mean = 0;
        double standard_deviation = 0;
        float variance = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);

        cout << "\n\t\tVariance " << setw(39) << " = " << static_cast<float>(pow(sqrt(standard_deviation / (dataset.size() - 1)), 2));
    }
}

// Mid Range
void section_M()
{
    cout << "\n\t\tSection M is running\n";

    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        float midRange = (dataset[0] + dataset[dataset.size() - 1]) / 2;
        cout << "\n\t\tMid Range " << setw(38) << " = " << midRange;
    }
}

// Quartiles
void section_N()
{
    cout << "\n\t\tSection N is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        int index;
        float medianEven;
        cout << "\n\t\tQuartiles: ";

        // Special case for vector's size less than or equal to 3
//if (dataset.size() <= 3)
//{
//    if (dataset.size() % 2 != 0) // odd
//    {
//        index = (dataset.size() - 1) / 2;

//        cout << "\n\t\tQ1 " << setw(41) << " = " << "unknown";
//        cout << "\n\t\tQ2 " << setw(41) << " = " << dataset[index];
//        cout << "\n\t\tQ3 " << setw(41) << " = " << "unknown";
//    }
//    if (dataset.size() % 2 == 0) // even
//    {
//        index = dataset.size() / 2;
//        medianEven = (dataset[index] + dataset[index - 1]) / 2.0;

//        cout << "\n\t\tQ1 " << setw(41) << " = " << "unknown";
//        cout << "\n\t\tQ2 " << setw(41) << " = " << medianEven;
//        cout << "\n\t\tQ3 " << setw(41) << " = " << "unknown";
//    }
//}

        //Normal case
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

// Interquartile Range
void section_O()
{
    cout << "\n\t\tSection O is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
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

// Outliers
void section_P()
{
    cout << "\n\t\tSection P is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        int index, size_of_quartiles, index_of_quartiles;
        float medianEven, outliers, upper_fence, lower_fence, interquartile_range;
        vector<int> outlier_numbers; // This vector will store numbers than are outside of upper fence and lower fence

        // Special case for vector's size less than or equal to 3
        //if (dataset.size() <= 3)
        //{
        //    if (dataset.size() % 2 != 0) // odd
        //    {
        //        index = (dataset.size() - 1) / 2;

        //        cout << "\n\t\tQ1 " << setw(41) << " = " << "unknown";
        //        cout << "\n\t\tQ2 " << setw(41) << " = " << dataset[index];
        //        cout << "\n\t\tQ3 " << setw(41) << " = " << "unknown";
        //    }
        //    if (dataset.size() % 2 == 0) // even
        //    {
        //        index = dataset.size() / 2;
        //        medianEven = (dataset[index] + dataset[index - 1]) / 2.0;

        //        cout << "\n\t\tQ1 " << setw(41) << " = " << "unknown";
        //        cout << "\n\t\tQ2 " << setw(41) << " = " << medianEven;
        //        cout << "\n\t\tQ3 " << setw(41) << " = " << "unknown";
        //    }
        //}

        // Normal case
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
                    for (int i = 0; i < outlier_numbers.size(); i++)
                        cout << outlier_numbers[i] << " ";
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

// Sum of Squares
void section_Q()
{
    cout << "\n\t\tSection Q is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        double sum = 0;
        double mean = 0;
        double sum_of_squares = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
        {
            sum_of_squares += pow(dataset[i] - mean, 2);
        }
        cout << "\n\t\tSum of Squares " << setw(33) << " = " << sum_of_squares;
    }
}

// Mean Absolute Deviation
void section_R()
{
    cout << "\n\t\tSection R is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        double sum = 0;
        double mean = 0;
        double mean_abs_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
        {
            mean_abs_deviation += abs((dataset[i] - mean));
        }
        cout << "\n\t\tMean Absolute Deviation " << setw(24) << " = " << mean_abs_deviation / dataset.size();
    }
}

// Root Mean Square
void section_S()
{
    cout << "\n\t\tSection S is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        double sum = 0;
        double sum_of_each_square = 0;
        double root_mean_square = 0;

        for (int i = 0; i < dataset.size(); i++)
            sum_of_each_square += pow(dataset[i], 2);

        root_mean_square = sum_of_each_square;
        root_mean_square = sum_of_each_square / dataset.size();
        root_mean_square = sqrt(sum_of_each_square / dataset.size());

        cout << "\n\t\tRoot Mean Square " << setw(31) << " = " << sqrt(sum_of_each_square / dataset.size());
    }
}

// Standard Error of the Mean
void section_T()
{
    cout << "\n\t\tSection T is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        double sum = 0;
        double mean = 0;
        double standard_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);

        cout << "\n\t\tStandard Error of the Mean " << setw(21) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / sqrt(dataset.size());
    }
}

// Coefficient of Variation
void section_U()
{
    cout << "\n\t\tSection U is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        double sum = 0;
        double mean = 0;
        double standard_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);

        cout << "\n\t\tCoefficient of Variation " << setw(23) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / mean;
    }
}

// Relative Standard Deviation
void section_V()
{
    cout << "\n\t\tSection V is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        double sum = 0;
        double mean = 0;
        double standard_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
            standard_deviation += pow(dataset[i] - mean, 2);

        cout << "\n\t\tRelative Standard Deviation " << setw(20) << " = " << (sqrt(standard_deviation / (dataset.size() - 1)) / mean) * 100 << " % ";
    }
}

// Display all results and write to an output text file
void section_W()
{
    cout << "\n\t\tSection W is running\n";
    if (dataset.size() == 0)
        cout << "\n\t\tERROR: Data set is empty";
    else
    {
        cout << "\n\t\tDescriptive Statistics: ";
        cout << "\n\n\t\tData set with " << dataset.size() << " data: ";
        displayVectorElements(dataset);

        double sum = accumulate(dataset.begin(), dataset.end(), 0);
        cout << "\n\n\t\tMinimum " << setw(40) << " = " << dataset[0];
        cout << "\n\n\t\tMaximum " << setw(40) << " = " << dataset[dataset.size() - 1];
        cout << "\n\n\t\tRange " << setw(42) << " = " << dataset[dataset.size() - 1] - dataset[0];
        cout << "\n\n\t\tSize " << setw(43) << " = " << dataset.size();
        cout << "\n\n\t\tSum " << setw(44) << " = " << sum;
        cout << "\n\n\t\tMean " << setw(43) << " = " << static_cast<double>(sum / dataset.size());
        int median, index;
        double medianEven;
        // Check whether 'size' is odd or even to calculate 'median'
        if (dataset.size() % 2 != 0) // odd
        {
            index = (dataset.size() - 1) / 2;
            cout << "\n\n\t\tMedian " << setw(41) << " = " << dataset[index];
        }
        if (dataset.size() % 2 == 0) // even
        {
            index = dataset.size() / 2;
            medianEven = static_cast<double>((dataset[index] + dataset[index - 1])) / 2.0;
            cout << "\n\n\t\tMedian " << setw(41) << " = " << medianEven;
        }

        double standard_deviation = 0;

        sum = accumulate(dataset.begin(), dataset.end(), 0);

        double mean = 0;
        mean = sum / dataset.size();

        for (int i = 0; i < dataset.size(); i++)
        {
            standard_deviation += pow(dataset[i] - mean, 2);
        }
        cout << "\n\n\t\tStandard Deviation " << setw(29) << " = " << sqrt(standard_deviation / (dataset.size() - 1));
        cout << "\n\n\t\tVariance " << setw(39) << " = " << pow(sqrt(standard_deviation / (dataset.size() - 1)), 2);
        cout << "\n\n\t\tMid Range " << setw(38) << " = " << (dataset[0] + dataset[dataset.size() - 1]) / 2;

        int size_of_quartiles, index_of_quartiles;
        double upper_fence, lower_fence, interquartile_range;

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
                cout << "\n\n\t\tQuartiles: ";
                cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << dataset[index_of_quartiles];
                cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[index];
                cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << dataset[index_of_quartiles + size_of_quartiles + 1];
                cout << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << dataset[index_of_quartiles + size_of_quartiles + 1] - dataset[index_of_quartiles];
                cout << "\n\n\t\tOutliers " << setw(39) << " = ";
                for (int i = 0; i < dataset.size(); i++)
                {
                    if (dataset[i] < lower_fence)
                        cout << dataset[i] << " ";
                    if (dataset[i] > upper_fence)
                        cout << dataset[i] << " ";
                }
            }
            if (size_of_quartiles % 2 == 0) // if the first halfand second half after splitting has even number
            {
                index_of_quartiles = size_of_quartiles / 2;
                interquartile_range = (((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                upper_fence = dataset[index_of_quartiles + size_of_quartiles + 1] + 1.5 * interquartile_range;
                lower_fence = dataset[index_of_quartiles] - 1.5 * interquartile_range;
                cout << "\n\n\t\tQuartiles: ";
                cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << ((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0;
                cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[index];
                cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << ((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0;
                cout << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << (((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                cout << "\n\n\t\tOutliers " << setw(39) << " = ";
                for (int i = 0; i < dataset.size(); i++)
                {
                    if (dataset[i] < lower_fence)
                        cout << dataset[i] << " ";
                    if (dataset[i] > upper_fence)
                        cout << dataset[i] << " ";
                }
            }
        }

        if (dataset.size() % 2 == 0) // even
        {
            index = dataset.size() / 2;
            medianEven = static_cast<double>((dataset[index] + dataset[index - 1])) / 2.0;

            //cout << "\n\n\t\tQ2 " << setw(41) << " = " << medianEven;

            size_of_quartiles = dataset.size() / 2;
            index_of_quartiles;

            if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number
            {
                index_of_quartiles = (size_of_quartiles - 1) / 2;
                interquartile_range = dataset[index_of_quartiles + size_of_quartiles] - dataset[index_of_quartiles];
                upper_fence = dataset[index_of_quartiles + size_of_quartiles + 1] + 1.5 * interquartile_range;
                lower_fence = dataset[index_of_quartiles] - 1.5 * interquartile_range;
                cout << "\n\n\t\tQuartiles: ";
                cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << dataset[index_of_quartiles];
                cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << medianEven;
                cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << dataset[index_of_quartiles + size_of_quartiles];
                cout << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << dataset[index_of_quartiles + size_of_quartiles] - dataset[index_of_quartiles];
                cout << "\n\n\t\tOutliers " << setw(39) << " = ";
                for (int i = 0; i < dataset.size(); i++)
                {
                    if (dataset[i] < lower_fence)
                        cout << dataset[i] << " ";
                    if (dataset[i] > upper_fence)
                        cout << dataset[i] << " ";
                }
            }

            if (size_of_quartiles % 2 == 0) // if the first half and second half after splitting has even number
            {
                index_of_quartiles = size_of_quartiles / 2;
                interquartile_range = (((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                upper_fence = dataset[index_of_quartiles + size_of_quartiles + 1] + 1.5 * interquartile_range;
                lower_fence = dataset[index_of_quartiles] - 1.5 * interquartile_range;
                cout << "\n\n\t\tQuartiles: ";
                cout << "\n\n\t\t\tQ1 " << setw(37) << " = " << ((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0;
                cout << "\n\n\t\t\tQ2 " << setw(37) << " = " << medianEven;
                cout << "\n\n\t\t\tQ3 " << setw(37) << " = " << ((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0;
                cout << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << (((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                cout << "\n\n\t\tOutliers " << setw(39) << " = ";
                for (int i = 0; i < dataset.size(); i++)
                {
                    if (dataset[i] < lower_fence)
                        cout << dataset[i] << " ";
                    if (dataset[i] > upper_fence)
                        cout << dataset[i] << " ";
                }
            }

        }

        double sum_of_squares = 0;
        for (int i = 0; i < dataset.size(); i++)
        {
            sum_of_squares += pow(dataset[i] - mean, 2);
        }
        cout << "\n\n\t\tSum of Squares " << setw(33) << " = " << sum_of_squares;

        double mean_abs_deviation = 0;
        for (int i = 0; i < dataset.size(); i++)
        {
            mean_abs_deviation += abs((dataset[i] - mean));
        }
        cout << "\n\n\t\tMean Absolute Deviation " << setw(24) << " = " << mean_abs_deviation / dataset.size();
        double sum_of_each_square = 0;
        double root_mean_square = 0;

        for (int i = 0; i < dataset.size(); i++)
            sum_of_each_square += pow(dataset[i], 2);

        cout << "\n\n\t\tRoot Mean Square " << setw(31) << " = " << sqrt(sum_of_each_square / dataset.size());
        cout << "\n\n\t\tStandard Error of the Mean " << setw(21) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / sqrt(dataset.size());

        double skewness = 0;
        double skewness_Second = 0;
        double decimal = 1.0;

        double skewness_First = (dataset.size() * decimal / (((dataset.size() - 1) * decimal) * (dataset.size() - 2) * decimal));
        for (int i = 0; i < dataset.size(); i++)
            skewness_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 3);
        skewness = skewness_First * skewness_Second;


        double kurtosis = 0;
        double kurtosis_Second = 0;
        float kurtosis_First = ((dataset.size() * decimal) * ((dataset.size() + 1) * decimal)) / (((dataset.size() - 1) * decimal * (dataset.size() - 2) * decimal * (dataset.size() - 3) * decimal));
        for (int i = 0; i < dataset.size(); i++)
            kurtosis_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 4);

        kurtosis = kurtosis_First * kurtosis_Second;

        double kurtosis_excess = 0;
        float kurtosis_excess_First = kurtosis_First;
        double kurtosis_excess_Second = 0;
        for (int i = 0; i < dataset.size(); i++)
            kurtosis_excess_Second += pow((dataset[i] - mean) / (sqrt(standard_deviation / (dataset.size() - 1))), 4);
        double kurtosis_excess_Third = (3.0 * (pow(dataset.size() - 1, 2))) / ((dataset.size() - 2) * decimal * (dataset.size() - 3) * decimal);
        kurtosis_excess = kurtosis_First * kurtosis_excess_Second - kurtosis_excess_Third;

        cout << "\n\n\t\tSknewness " << setw(38) << " = " << skewness;
        cout << "\n\n\t\tKurtosis " << setw(39) << " = " << kurtosis;
        cout << "\n\n\t\tKurtosis Excess " << setw(32) << " = " << kurtosis_excess;
        cout << "\n\n\t\tCoefficient of Variation " << setw(23) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / mean;
        cout << "\n\n\t\tRelative Standard Deviation " << setw(20) << " = " << (sqrt(standard_deviation / (dataset.size() - 1)) / mean) * 100 << " % ";

        vector<int> frequency_vector;
        frequency_vector.resize(dataset[dataset.size() - 1] + 1);
        for (int i = 0; i < dataset.size(); i++)
        {
            frequency_vector.at(dataset[i]) += 1;
        }

        double frequency = accumulate(frequency_vector.begin(), frequency_vector.end(), 0);
        cout << "\n\n\t\tFrequency Table: ";
        cout << "\n\n\t\t\tValue          Frequency         Frequency %";
        cout << "\n\n\t\t\t";

        for (int i = 0; i < frequency_vector.size(); i++)
        {
            if (frequency_vector.at(i) != 0)
            {
                cout << "\n\t\t\t";
                cout << i << setw(14) << frequency_vector[i] << setw(18) << " " << static_cast<double>((frequency_vector[i] / frequency) * 100);
            }
        }

        // Write the output into file
        string fileName = inputString("\n\t\tEnter an output file name: ", false);
        ofstream outputFile;
        outputFile.open(fileName);
        if (outputFile.fail())
            cout << "\n\t\tERROR: File " << fileName << " could not be opened.";
        else
        {
            outputFile << "\n\t\tDescriptive Statistics: ";
            outputFile << "\n\n\t\tData set with " << dataset.size() << " data: ";
            outputFile << "\n\t\t";
            for (int i = 0; i < dataset.size(); i++)
            {
                outputFile << dataset[i] << " ";
            }
            outputFile << "\n\n\t\tMinimum " << setw(40) << " = " << dataset[0];
            outputFile << "\n\n\t\tMaximum " << setw(40) << " = " << dataset[dataset.size() - 1];
            outputFile << "\n\n\t\tRange " << setw(42) << " = " << dataset[dataset.size() - 1] - dataset[0];
            outputFile << "\n\n\t\tSize " << setw(43) << " = " << dataset.size();
            outputFile << "\n\n\t\tSum " << setw(44) << " = " << sum;
            outputFile << "\n\n\t\tMean " << setw(43) << " = " << static_cast<double>(sum / dataset.size());
            if (dataset.size() % 2 != 0) // odd
            {
                index = (dataset.size() - 1) / 2;
                outputFile << "\n\n\t\tMedian " << setw(41) << " = " << dataset[index];
            }
            if (dataset.size() % 2 == 0) // even
            {
                index = dataset.size() / 2;
                medianEven = static_cast<double>((dataset[index] + dataset[index - 1])) / 2.0;
                outputFile << "\n\n\t\tMedian " << setw(41) << " = " << medianEven;
            }
            outputFile << "\n\n\t\tStandard Deviation " << setw(29) << " = " << sqrt(standard_deviation / (dataset.size() - 1));
            outputFile << "\n\n\t\tVariance " << setw(39) << " = " << pow(sqrt(standard_deviation / (dataset.size() - 1)), 2);
            outputFile << "\n\n\t\tMid Range " << setw(38) << " = " << (dataset[0] + dataset[dataset.size() - 1]) / 2;

            if (dataset.size() % 2 != 0) // odd
            {
                if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number 
                {
                    outputFile << "\n\n\t\tQuartiles: ";
                    outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << dataset[index_of_quartiles];
                    outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[index];
                    outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << dataset[index_of_quartiles + size_of_quartiles + 1];
                    outputFile << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << dataset[index_of_quartiles + size_of_quartiles + 1] - dataset[index_of_quartiles];
                    outputFile << "\n\n\t\tOutliers " << setw(39) << " = ";
                    for (int i = 0; i < dataset.size(); i++)
                    {
                        if (dataset[i] < lower_fence)
                            outputFile << dataset[i] << " ";
                        if (dataset[i] > upper_fence)
                            outputFile << dataset[i] << " ";
                    }
                }
                if (size_of_quartiles % 2 == 0) // if the first halfand second half after splitting has even number
                {
                    outputFile << "\n\n\t\tQuartiles: ";
                    outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << ((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0;
                    outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << dataset[index];
                    outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << ((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0;
                    outputFile << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << (((dataset[index_of_quartiles + size_of_quartiles + 1] + dataset[index_of_quartiles + size_of_quartiles])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                    outputFile << "\n\n\t\tOutliers " << setw(39) << " = ";
                    for (int i = 0; i < dataset.size(); i++)
                    {
                        if (dataset[i] < lower_fence)
                            outputFile << dataset[i] << " ";
                        if (dataset[i] > upper_fence)
                            outputFile << dataset[i] << " ";
                    }
                }
            }

            if (dataset.size() % 2 == 0) // even
            {

                if (size_of_quartiles % 2 != 0) // if the first half and second half after splitting has odd number
                {
                    outputFile << "\n\n\t\tQuartiles: ";
                    outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << dataset[index_of_quartiles];
                    outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << medianEven;
                    outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << dataset[index_of_quartiles + size_of_quartiles];
                    outputFile << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << dataset[index_of_quartiles + size_of_quartiles] - dataset[index_of_quartiles];
                    outputFile << "\n\n\t\tOutliers " << setw(39) << " = ";
                    for (int i = 0; i < dataset.size(); i++)
                    {
                        if (dataset[i] < lower_fence)
                            outputFile << dataset[i] << " ";
                        if (dataset[i] > upper_fence)
                            outputFile << dataset[i] << " ";
                    }
                }

                if (size_of_quartiles % 2 == 0) // if the first half and second half after splitting has even number
                {
                    outputFile << "\n\n\t\tQuartiles: ";
                    outputFile << "\n\n\t\t\tQ1 " << setw(37) << " = " << ((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0;
                    outputFile << "\n\n\t\t\tQ2 " << setw(37) << " = " << medianEven;
                    outputFile << "\n\n\t\t\tQ3 " << setw(37) << " = " << ((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0;
                    outputFile << "\n\n\t\tInterquartile Range " << setw(28) << " = " << fixed << (((dataset[index_of_quartiles + size_of_quartiles] + dataset[index_of_quartiles + size_of_quartiles - 1])) / 2.0) - (((dataset[index_of_quartiles] + dataset[index_of_quartiles - 1])) / 2.0);
                    outputFile << "\n\n\t\tOutliers " << setw(39) << " = ";
                    for (int i = 0; i < dataset.size(); i++)
                    {
                        if (dataset[i] < lower_fence)
                            outputFile << dataset[i] << " ";
                        if (dataset[i] > upper_fence)
                            outputFile << dataset[i] << " ";
                    }
                }
            }

            outputFile << "\n\n\t\tSum of Squares " << setw(33) << " = " << sum_of_squares;
            outputFile << "\n\n\t\tMean Absolute Deviation " << setw(24) << " = " << mean_abs_deviation / dataset.size();
            outputFile << "\n\n\t\tRoot Mean Square " << setw(31) << " = " << sqrt(sum_of_each_square / dataset.size());
            outputFile << "\n\n\t\tStandard Error of the Mean " << setw(21) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / sqrt(dataset.size());
            outputFile << "\n\n\t\tSknewness " << setw(38) << " = " << skewness;
            outputFile << "\n\n\t\tKurtosis " << setw(39) << " = " << kurtosis;
            outputFile << "\n\n\t\tKurtosis Excess " << setw(32) << " = " << kurtosis_excess;
            outputFile << "\n\n\t\tCoefficient of Variation " << setw(23) << " = " << sqrt(standard_deviation / (dataset.size() - 1)) / mean;
            outputFile << "\n\n\t\tRelative Standard Deviation " << setw(20) << " = " << (sqrt(standard_deviation / (dataset.size() - 1)) / mean) * 100 << " % ";
            outputFile << "\n\n\t\tFrequency Table: ";
            outputFile << "\n\n\t\t\tValue          Frequency         Frequency %";
            outputFile << "\n\n\t\t\t";

            for (int i = 0; i < frequency_vector.size(); i++)
            {
                if (frequency_vector.at(i) != 0)
                {
                    outputFile << "\n\t\t\t";
                    outputFile << i << setw(14) << frequency_vector[i] << setw(18) << " " << static_cast<double>((frequency_vector[i] / frequency) * 100);
                }
            }

        }
        outputFile.close();

        cout << "\n\t\tFile " << fileName << " has been created.\n\n";
    }
}

// Additional functions 
void displayVectorElements(vector<int> v)
{
    cout << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

#endif
