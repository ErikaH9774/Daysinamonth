// Daysinamonth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int month = 0;
    int year = 0;

    cout << "Enter the number of month (1-12) \n"; 
    cin >> month; 

    switch (month) {

    case 1: case 3: case 5: case 7: case 8: case 10: case 12:

        cout << "This month has 30 days. \n";
        break;
    case 4: case 6: case 9: case 11:
        cout << "this month has 30 days.\n";
        break;
    case 2:

        cout << "Enter the year\n";
        cin >> year;

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

            cout << "February in " << year << " has 29 days. (leap year)";
        
        } else {
            cout << " February in " << year << " has 28 days.\n";
        }
        break;
        default:
        cout << "invalid month. Please enter a number between 1 and 12.\n";
        break;

    }

        return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
