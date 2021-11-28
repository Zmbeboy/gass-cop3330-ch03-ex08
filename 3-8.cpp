/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Eric Gass
 */

#include "std_lib_facilities.h"

bool determineOddEven(int input)
    {
        if(input % 2 == 0)
        {
            return true; // even
        }
        else
        {
            return false; // odd
        }
    }

int getUserInput()
    {
        int number;
        cout << "Enter a number\n";
        cin >> number;
        return number;
    }
int main()
    {
        int input = getUserInput();
        bool result = determineOddEven(input);
        if(result)
        {
            cout << input<<" is an even number\n";
        }
        else
        {
            cout << input<<" is an odd number\n";
        }
        return 0;
    }