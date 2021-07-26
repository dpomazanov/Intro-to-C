
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

char letter;

int digit;

 

cout << "Enter a single alphabet character" << endl;

cin >> letter;

 

switch (letter)

{

case 'a':

case 'b':

case 'c':

case 'A':

case 'B':

case 'C':

     digit = 2;

     break;

 

case 'd':

case 'e':

case 'f':

case 'D':

case 'E':

case 'F':

     digit = 3;

     break;

 

//add more cases below


case 'g':

case 'h':

case 'i':

case 'G':

case 'H':

case 'I':

     digit = 4;

     break;


case 'j':

case 'J':

case 'k':

case 'K':

case 'l':

case 'L':

     digit = 5;

     break;


case 'm':

case 'M':

case 'n':

case 'N':

case 'o':

case 'O':

     digit = 6;

     break;



case 'p':

case 'P':

case 'q':

case 'Q':

case 'r':

case 'R':

case 's':

case 'S':

     digit = 7;

     break;

case 't':

case 'T':

case 'u':

case 'U':

case 'v':

case 'V':

     digit = 8;

     break;

case 'w':

case 'W':

case 'x':

case 'X':

case 'y':

case 'Y':

case 'z':

case 'Z':

     digit = 9;

     break;



 

 

}

cout << "Letter: " << letter << endl;

cout << "Digit: " << digit << endl;





            return 0;



}