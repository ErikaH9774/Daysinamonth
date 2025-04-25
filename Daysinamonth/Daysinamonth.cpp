// Daysinamonth.cpp : This program shows the leap year based on the year 
//
//using namespace std to avoid using std cout or std cin each time
#include <iostream>
using namespace std;


int main()
{
    //both variable is month and year
    int month = 0;
    int year = 0;
    //telling user to enter the number of month 1-12
    cout << "Enter the number of month (1-12) \n"; 
    //user enters number of the month
    cin >> month; 
    //using the switch statement and claiming month for all cases one through 12. 
    switch (month) {
        //putting the case that only has 30 days which are number 1,3,5,7,8,10,12
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        //display to the user this month has 30 days 
        cout << "This month has 30 days. \n";
        //it breaks
        break;
        //case 4,6,9,11 has 30 days 
    case 4: case 6: case 9: case 11:
        //displays to user this month has 30 days
        cout << "this month has 30 days.\n";
        //breaks 
        break;
        //case 2 is where i displayed the if else statement.
    case 2:
        //displays to users to enter the year 
        cout << "Enter the year\n";
        //the input for the user
        cin >> year;
        //included if year % 4 ==0 && year%100!=0) || (year % 400 ==0))
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            //display february in 2008 has 29 days (leap year)
            cout << "February in " << year << " has 29 days. (leap year)";
        //else statement
        } else {
            //otherwise display February in 2009 has 28 days.
            cout << " February in " << year << " has 28 days.\n";
        }
        //ends
        break;
        //invalid error it will display " Invalid month. Please enter a number between 1 and 12.
        default:
        cout << "invalid month. Please enter a number between 1 and 12.\n";
        break;

    }

        return 0;
}
