
#include <iostream>

#include <string>

using namespace std;


int main( )

  {

    int num;
    int count, factNum;
    cout << "Enter a number" << endl;
    cin >> num;

    while (num != -1)

    {

        //compute factorial using a For loop

        factNum = 1;

        for (count=1; count <=num; count++)

        {

                factNum = factNum * count;

        }

        //display factorial
        cout << "The factorial of "<< num <<" is "<< factNum << endl;


        cout << "Enter a number" << endl;
        cin >> num;

    } 
  }