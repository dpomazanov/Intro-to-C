
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

//declare variables

//num will keep the number entered by the user

//sum will keep the sum of the numbers entered by the user

//count will keep the count of the numbers entered by user

//average will be used to store the average of all the numbers

 

double num;

double sum=0;

double average;

int count=0;

 

//Initial setup

//Input a number

cout << "Enter a number<q to end data>" << endl;

cin >> num;

 

//Test

while (!cin.fail())

{

     //Write code that processes the number entered.

     //Process the number by adding num to sum

     sum = sum + num;

     // add 1 to count

     count = count + 1;

 

    //Update setup

    //Input a number

    cout << "Enter a number<q to end data>" << endl;

    cin >> num;

}

//calculate average by dividing sum with count

 average = sum / count;

 cout << "Sum: " << sum << endl;
 cout << "Count: " << count << endl;
 cout << "Average: " << average << endl;

//display sum, count and average
        return 0;



}