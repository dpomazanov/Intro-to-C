
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

//cin inputs only a word.

//For inputting multiple words, use cin.getline

 

string message;

int count, totalCount;

 

cout << "Enter total count" << endl;

cin >> totalCount;
cin.ignore( );

cout << "Enter message" << endl;

getline (cin, message);

 

count = 0;

while (count < totalCount - 1) {

            cout << message << endl;

            count++;

}



            return 0;



}