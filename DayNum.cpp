
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

/*

The sample code snippet below asks the user to input month, day and year one after the other. Then it computes the daynumber.

*/

 int day, month, year;

 

//input month, day, and year values.

cout << "Enter month as a number" << endl;

cin >> month;

cout << "Enter day as a number" << endl;

cin >> day;

cout << "Enter year as a number" << endl;

cin >> year;

 

 

//Determining Leap year using a boolean variable

 

bool leapyear;

leapyear = false;

 if  ((year % 4) == 0)

{

          leapyear = true;

}

 

 // Determining day number

   int dayNum;

    switch (month) {

    case 1:

        dayNum = day;

        break;

    case 2:

        dayNum = day + 31;

        break;

    case 3:

        dayNum = day + 31 + 28;

        break;

    case 4:

        dayNum = day + 31 + 28 + 31;

        break;
    
    case 5:

        dayNum = day + 31 + 28 + 31 + 30;

        break;
    
    case 6:

        dayNum = day + 31 + 28 + 31 + 30 + 31;

        break;
    
    case 7:

        dayNum = day + 31 + 28 + 31 + 30 + 31 + 30;

        break;

    case 8:

        dayNum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;

        break;

    case 9:

        dayNum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30;

        break;


    case 10:

        dayNum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 31;

        break;

    case 11:

        dayNum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30;

        break;

    case 12:

        dayNum = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31;

        break;


    /// more code for other months

 

 

    }

    //add 1 for a leap year

if (leapyear==true && month > 2)

          dayNum ++;

 

 //output the date and dayNum

 

cout << "Date: " << month << "/" << day << "/" << year << endl;
cout << "Day Number: " << dayNum << endl;
 




            return 0;



} 