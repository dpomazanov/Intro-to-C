#include <iostream>

#include <string>

using namespace std;
int main ( )
{

int userInches, inches, feet, yards;

cout << "Enter distance in inches" << endl;

cin >> userInches;  // assume user enters 50

inches=userInches;

// Convert inches into feet and inches.

 

//The feet are obtained by using quotient (division) operator ( / ) below.

feet = inches/12; //This integer division computes quotient. So feet is now 4 (the quotient). Remainder is ignored.

 

//The remaining inches are obtained below by using remainder operator (%) below.

inches = inches%12; //This computes the remainder. So, inches is now 2 (the remainder). Quotient is ignored.

 

//Convert feet into yards and feet.

//Repeat the above process.

 

//Find yards (from the feet above) by using quotient operator ( / ).

yards = feet / 3; //This integer division computes quotient. So, yards is now 1 (the quotient). 

//Find the remaining feet (from the feet above) by using remainder operator (%).

feet = feet % 3; //This computes the remainder. So, feet is now 1 (the remainder). Quotient is ignored.


cout << "The distance of " << userInches << " inches is the same distance of " << yards << " yards " << feet << " feet " << inches << " inches " <<endl;



 
            return 0;


}