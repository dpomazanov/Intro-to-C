
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

/*

The code below asks the user to input month, day and year one after the other. It then validates the values entered. If any of the values is invalid, it displays an error message and returns.

*/

 

int day, month, year;

 

//input day, month, and year values here.

 

 cout << "Enter month as a number" << endl;

cin >> month;

cout << "Enter day as a number" << endl;

cin >> day;

cout << "Enter year as a number" << endl;

cin >> year;

 

//Validate input values

//Determining Leap year

bool leapyear = false;

 if  ((year % 4) == 0)

{

          leapyear = true;

}

 

//Validating YearValue
if ( year < 2000 || year > 2099 )

{

cout <<  "Unacceptable Year Entered: " << year << endl;

          cout << "Valid Range For Year 2000 to 2099" << endl;

return (0);

}

 

//Validating Month Value
if ( month < 1 || month > 12 )

{

         

           cout << "Invalid Month Entered: " << month << endl;

           return (0);

}

 

//Validating Day Value
if ( ( day < 1 ) || ( day > 31 ) )

{         

cout << "Invalid Day Entered: " <<  day << endl;

          return (0);

}

 

//Validating Other Day Values
if (  ( month == 4 || month == 6 || month == 9 || month == 11)  && ( day > 30 ) )

{

          cout << "Mismatching Month/Day Values Entered. "  << endl;

          cout << "Month Value Entered: " << month << endl;

cout <<  "Day Value Entered: " << day << endl;

          return (0);

}

 

if ( (month == 2) && ( day > 29 ) && ( leapyear ) )

{

          cout << "Mismatching Month/Day Values Entered: " << endl;

          cout << "Month Value Entered: " << month << endl;

cout <<  "Day Value Entered: " << day << endl;

          return (0);

}

 

if ( (month == 2) && ( day > 28 ) && ( ! leapyear ) )

{

          cout << "Mismatching Month/Day Values Entered: " << endl;

          cout << "Month Value Entered: " << month << endl;

cout <<  "Day Value Entered: " << day << endl;

          return (0);

}

 

 //put the code for determining dayNum here

 

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
 

 

//output the date and dayNum



            return 0;



}