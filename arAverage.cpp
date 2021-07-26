//function prototypes

#include <iostream>

#include <string>

using namespace std;

//function main

 

int main( )

{

            double scores [20];

            int classSize;

           

            int i;

 

            //Input class size

            cout << "Enter class size<1-20>" << endl;

            cin >> classSize;

            //if class size is not in allowable range, display a message and return from main

 

 

           

//input scores (use array traversal)

            for (i=0; i < classSize; i++)

            {

                        cout << "Enter a test score" << endl;

                        cin >> scores [i];

            }

            //compute sum (use array traversal)

double sum=0;

double average;

            for (i=0; i < classSize; i++)

            {

                        sum = sum + scores [i];

            }

            //compute average

 
            average = sum / classSize;
 

            //display average

            cout << "Average Score:" << endl;
            cout << average << endl;
 

            //display array (use array traversal)

 
            cout << "Original Scores:" << endl;
            for (int i = 0; i < classSize; ++i) {
                cout << scores[i] << "  ";
            }
 



           

            return 0;

}