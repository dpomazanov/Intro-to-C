#include <iostream>

#include <string>

using namespace std;


int main ( )

{

//declare double variables for holding decimal values  

double n1, n2, n3, sum, avg;

 

//Input numbers

cout << "Enter the first number" << endl;

cin >> n1;

cout << "Enter the second number" << endl;

cin >> n2;

cout << "Enter the third number" << endl;

cin >> n3;

 

//compute the sum of the numbers and save it in the variable sum

sum=n1+n2+n3;

 

//compute the average and save it in the variable avg

 
avg = sum/3;
 

//display the first line of the output

cout << "The sum of " << n1 << ", " << n2 << " and " << n3 << " is " << sum << endl;

 

//display the second line of the output.

 
cout << "The average of " << n1 << ", " << n2 << " and " << n3 << " is " << avg << endl;

 

            return 0;

}