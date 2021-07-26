
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

   int count, totalCount;

    double num, sum;

 

    //input data count

    cout << "Enter data count" << endl;

    cin >> totalCount;

 

    //initialize sum

    sum = 0;

 

    //Initial Setup

    count = 0;

 

    //Test

    while (count < totalCount)

    {

      //input a number

      cout << "Enter a non-negative number" << endl;

      cin >> num;

     

     

      //add num to sum
      sum = sum + num;
 

 

       //Update Setup

       count = count + 1;

    }

    //display sum
    cout << "sum: " << sum << endl;


            return 0;



}