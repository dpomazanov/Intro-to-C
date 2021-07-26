//method display prototype 

//method display definition
#include <iostream>

#include <string>

using namespace std;
 
void display2 (char ch, int n);

//method display2 definition

 

void display2 (char ch, int n)

{
            int count;

            for (count=0; count<n; count++)
            ;

            {

                        cout << ch;

            }

            cout << endl;

}

 

 

//method main definition

 

 int main ( )

{

    char chHead, chFoot;

    int nHead, nFoot;

    string name, saddr, caddr;

 

//Ask the user to enter the character to be used in displaying the header line and input it a char variable chHead.

cout << "Enter the character to be used in the header:" << endl;
    cin >> chHead;

//Ask the user to enter the number of times to display the header character and input it a int variable nHead.

 cout << "Enter the number of characters to be printed in the header line:" << endl;
    cin >> nHead;

//Ask the user to enter full name and input in a string variable name.

 cout << "Enter Your Full Name:" << endl;
    getline (cin, name);

// Ask the user to enter street addr and input in a string variable saddr

 cout << "Enter Your Street Address:"<< endl;
    getline (cin, saddr);

// Ask the user to enter city & state and input in a string variable caddr

 cout << "Enter Your City and State Address:"<< endl;
    getline (cin, caddr);

//Ask the user to enter the character to be used in displaying the footer line and input it a char variable chFoot.

 cout << "Enter the character to be used in the footer:" << endl;
    cin >> chFoot;

//Ask the user to enter the number of times to display the footer character and input it a int variable nFoot.

cout << "Enter the number of ‘#’ characters to be printed in the footer line:" << endl;
    cin >> nFoot;

//call the display method to display 30 '*' in a line (i.e. the header line).

      display2 (chHead, nHead);

 

        //Display user’s full name in a line.

        cout << name << endl;

        //Display user’s street address in a line

        cout << saddr << endl;

        //Display user’s city and state address in a line

 
        cout << caddr << endl;
 

      //call the display method to display 30 '*' in a line (i.e. the footer line)

      display2 (chFoot, nFoot);

 

      // return from the main method

      return 0;

}