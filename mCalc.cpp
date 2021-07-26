
#include <iostream>

#include <string>

using namespace std;

double calculate (char op, double n1, double n2)

{

       double res;

       switch (op)

       {

       case '+':

              res = n1 + n2;

              break;

 

       case '-':

              res = n1 - n2;

              break;

       case '*':

              res = n1 * n2;

              break;

        case '/':

              res = n1 / n2;

              break;


       }
       
       return res;

}

int main ( )

{

char oper;

double num1, num2, result;

 

 

//input oper from the user

cout << "Enter an operation" << endl;
cin >> oper;

 while (oper == '+' || oper == '-' || oper == '*' || oper == '/' )

 {

       //input num1 and num2 from the user

    cout << "Enter the first number" << endl;
    cin >> num1;

    cout << "Enter the second number" << endl;
    cin >> num2;

//call the function calculate to perform the desired operation and receive the result

    result = calculate (oper, num1, num2);

 

 

//display the result

 
    cout << "The result is " << result << endl;
 

//update for the loop+

       //input oper from user

 
    cout << "Enter an operation"<< endl;
    cin >> oper;

    // cout << "Enter Your Full Name:";
    // getline (cin, name);
 

}

 



return 0;
}
