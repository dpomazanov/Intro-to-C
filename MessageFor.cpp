
#include <iostream>

#include <string>

using namespace std;


int main( )

  {

    string message;

    int count, totalCount;

 

    //input message to be displayed.

    cout << "Enter the message to be displayed";

    getline (cin, message);

   

    //input the total count the message is to be displayed.

    cout << "Enter total number of times message is to be displayed";

    cin >> totalCount;

    cin.ignore();

 

    //Write the For statement to display message totalCount times.

    for (count=0; count < totalCount; count++)

    {

          //display message
        cout << message << endl;


    }

     //display bye.

    cout << "Bye." << endl;

  }