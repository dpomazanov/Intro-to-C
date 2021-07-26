//function prototypes

#include <iostream>

#include <string>

using namespace std;
 

//function prototype

void accumulate (double & acc, double opd, char op);

 

//function accumulate

void accumulate (double & acc, double opd, char op)

{

      switch (op)

      {

        case '+':

            acc=acc+opd;

            break;

 

        case '-':

            acc=acc-opd;

            break;

        case '/':

            acc=acc/opd;

            break;

        case '*':

            acc=acc*opd;

            break;

} 

}

 

//function main

int main ( )

{

      double accumulator=0;

      char operation;

      double operand;

 

      //display accumulated value

      cout << "Accumulated Value: "<< accumulator << endl;

 

//input operation (loop initialization)

      cout << "Enter Next Operation: ";

      cin >> operation;

      while (operation == '+' || operation == '-' || operation == '*' || operation == '/')

      {

            //input operand.

            cout << "Enter Next Operand: ";
            cin >> operand;

 

           

            //call accumulate to calculate accumulated value

            accumulate (accumulator, operand, operation);

 

//display new accumulated value

 
            cout << "Accumulated Value: "<< accumulator << endl;

 

 

//input operation (loop update)

            cout << "Enter Next Operation: ";

            cin >> operation;

       }

      //display bye

                    cout << "Enter Next Operation: ";


      //return from function

      return 0;

}

 