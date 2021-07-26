//function prototypes

#include <iostream>

#include <string>

using namespace std;
 

//function prototype

void compute (double num1, double num2,

                        double & sum, double & diff, double & prod, double & quotient);

 

 

//function compute definition

 

void compute (double num1, double num2,

                        double & sum, double & diff, double & prod, double & quotient)

{

      sum=num1 + num2;

      diff=num1 - num2;

      prod=num1 * num2;

      quotient=num1 / num2;

}

 

//function main definition

 

int main ( )

{

      double n1, n2, s, d, p, q;

 

      //input n1 from user (Initialization of the loop)

      cout << "Enter the first number" << endl;
      cin >> n1;

      


      while (cin.good( ) )

      {

            //input n2 from user

            cout << "Enter the second number" << endl;
            cin >> n2;

 

//call compute

            compute (n1, n2, s, d, p, q);

 

            //display sum

            cout << "Sum: " << s << endl;

 

            //display difference

            cout << "Difference: " << d << endl;

 

            //display product

            cout << "Product: " << p << endl;

 

 

            //display quotient

            cout << "Quotient: " << q << endl;

 

            //input n1 from user (update of the loop)

            cout << "Enter the first number" << endl;    

            cin >> n1;

      }

      //return from the function main

    cout << "Bye" << endl;    


      return 0;

}