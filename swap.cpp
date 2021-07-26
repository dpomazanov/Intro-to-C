//function prototypes

#include <iostream>

#include <string>

using namespace std;
 

void swap1 (double n1, double n2);

void swap2 (double & n1, double & n2);

 

//Below is the description and sample code for function swap1.

/*

Description:

Function swap1 receives two double parameters passed by value/copy and swaps their contents.

 

Parameters:

double n1 – the first number received

double n2 – the second number received.

 

Return Value:

Does not return a value.

*/

 

//code for swap1

void swap1 (double n1, double n2)

{

            double temp;

            temp = n1;

            n1 = n2;

            n2 = temp;

}

 

//Below is the description and sample code for function swap2.

/*

Description:

Function swap2 receives two double parameters passed by reference/alias and swaps their contents.

 

Parameters:

double n1 – the first number received

double n2 – the second number received.

 

Return Value:

Does not return a value.

*/

 

//code for swap2 

void swap2 (double & n1, double & n2)

{

            double temp;

            temp = n1;

            n1 = n2;

            n2 = temp;

}

 

//Description of function main 

int main ( )

{

    char oper;

    double num1, num2, result;

    cout << "Enter the first number" << endl;
    cin >> num1;

    cout << "Enter the second number" << endl;
    cin >> num2;

    cout << "Calling function swap1" << endl;
    swap1(num1, num2);
    cout << "Returned from function swap1" << endl;    

    cout << "The first number " << num1 << endl;

    cout << "The second number " << num2 << endl;

    cout << "Calling function swap1" << endl;
    swap2(num1, num2);
    cout << "Returned from function swap1" << endl; 

    cout << "The first number " << num1 << endl;

    cout << "The second number " << num2 << endl;

}
//code for function main 