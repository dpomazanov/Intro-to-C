//function prototypes

#include <iostream>

#include <string>

using namespace std;

//function main


// Below is the function inputScores.

// It receives an array and a length

// It inputs values into the array from the user one by one depending upon how much is length

void inputScores (double  s [], int sLen)

{

            int i;

            for (i=0; i<sLen; i++)

            {

cout << "Enter a test score" << endl;
cin >> s[i];

            }

}

 

// Below is the function compAverage

// It receives an array and a length

// It takes values from the array one by one depending upon how much is the length

// and adds them a variable sum initialized to zero

// From sum, it computes the average depending upon how much is the length

// and returns the average to the caller of this function

double compAverage (double s [], int sLen)

{

            double sum, avg;

            int i;

            sum=0;

            for (i=0; i<sLen; i++)

            {

sum=sum+s[i];

            }

            avg=sum/sLen;

            return avg;

}

 

// Below is the function dispScores.

// It receives an array and a length

// It diplays the array values one by one depending upon how much is the length

void dispScores (double s [], int sLen)

{

            int i;

            for (i=0; i<sLen; i++)

            {

//write code to display an array element value and a space after that

                        cout << s[i] << " ";

            }

            cout << endl;

}
 

int main( )

{

            double scores [20];

            int classSize;

            double sum=0;

            double average;

            int i;

 

            //Input class size

            cout << "Enter class size<1-20>" << endl;

            cin >> classSize;

 

            //if class size is not in the allowable range, display a message and return from main

            if (classSize < 1 || classSize > 20)

            {

                        cout << "Class size is out of range" << endl;

                        return 0;

            }

 

//call function inputScores to input scores

inputScores (scores, classSize);

           

            //call function compAverage to compute average 

            average = compAverage (scores, classSize);

 

            //write code to display average

 
            cout << "Average Score:" << endl;
            cout << average << endl;
 

            //call function displayScores to display scores

            dispScores  (scores, classSize);

 

            return 0;

}

 

