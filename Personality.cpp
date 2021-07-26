
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

int option;

 

string menu = "";

menu = menu + "1 – My favorite color is Red \n";

menu = menu + "2 – My favorite color is Green \n";

menu = menu + "3 – My favorite color is Blue \n";

menu = menu + "4 – My favorite color is Violet \n";

menu = menu + " \n";

menu = menu + "Select your favorite color by entering the number next to it:\n";

 

cout << menu;

cin >> option;

 

switch (option) {

case 1:

     cout << "Your Favorite Color:  Red" << endl;

     cout << " Your Personality Type: Feeling Type" << endl;

     break;

 

case 2:

     cout << "Your Favorite Color:  Green" << endl;

     cout << " Your Personality Type: Thinking Type" << endl;

     break;

 

//add more cases here

 case 3:

     cout << "Your Favorite Color:  Blue" << endl;

     cout << " Your Personality Type: Intuitive Type" << endl;

     break;
case 4:

     cout << "Your Favorite Color:  Violet" << endl;

     cout << " Your Personality Type: Sensing Type" << endl;

     break;

 

 default:

     cout << "Invalid Input" << endl;

     break;

 }





            return 0;



}