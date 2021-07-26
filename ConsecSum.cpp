
#include <iostream>

#include <string>

using namespace std;


int main( )

  {

    int count, totalCount, startNum, endNum, sum;


    //input message to be displayed.

    cout << "Enter the starting number:";
    cin >> startNum;


    //input message to be displayed.

    cout << "Enter the ending number:";
    cin >> endNum;

    

    if (startNum > endNum)

    {

    int temp;

    temp = startNum;

    startNum = endNum;

    endNum = temp;

    }

    

    //For loop

    sum = 0;

    for (count=startNum; count<=endNum; count++)

    {

            sum = sum + count;

    }

     //display bye.

    cout << "The sum of numbers from " << startNum << " to " << endNum << " is " << sum << endl;

  }