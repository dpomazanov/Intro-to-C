//method display prototype 

//method display definition
#include <iostream>

#include <string>

using namespace std;
 
void display ( );

void display ( )

{

      int count;

      for (count=0; count < 30; count ++);

      {

            cout << '*';

      }

      cout << endl;

}

 

 //method main definition

 

 int main ( )

{

    string name, saddr, caddr;

 

    //Ask the user to enter full name and input in a string variable name.
    
    cout << "Enter Your Full Name:";
    getline (cin, name);

    // Ask the user to enter street addr and input in a string variable saddr

    cout << "Enter Your Street Address:";
    getline (cin, saddr);

    // Ask the user to enter city & state and input in a string variable caddr

    cout << "Enter Your City and State Address:";
    getline (cin, caddr);

    //call the display method to display 30 '*' in a line (i.e. the header line).

    display ( );

 

    //Display user’s full name in a line.

    cout << name << endl;


    //Display user’s street address in a line

    cout << saddr << endl;


    //Display user’s city and state address in a line

    cout << caddr << endl;
 

      //call the display method to display 30 '*' in a line (i.e. the footer line)

      display ( );

 

      // return from the main method

      return 0;

}