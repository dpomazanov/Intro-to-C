//function prototypes

#include <iostream>

#include <string>

using namespace std;
 

//function prototype

void accumulate (double & acc, double opd, char op);

 

//function accumulate

double accumulate2 (double acc, char op, double opd)

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

return acc; 

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

 

           

//call accumulate2 to calculate accumulated value

            accumulator=accumulate2(accumulator, operation, operand);



 

//display new accumulator value

 

             cout << "Accumulated Value: "<< accumulator << endl;


 

//input operation (loop update)

            cout << "Enter Next Operation: ";

            cin >> operation;

     }

     //display bye


    cout << "Bye" << endl;    

 

     //return from function

     return 0;

}

 