
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

// declare variables

double maxScore, pctPassScore, userScore, pctUserScore;

 

//write code to input maxScore, pctPassScore, userScore

 
cout << "Enter Maximum Test Score:" << endl;

cin >> maxScore;

cout << "Enter Percent Pass Score:" << endl;

cin >> pctPassScore;
 
cout << "Enter User Test Score:" << endl;

cin >> userScore;

 

//determine pctUserScore

pctUserScore = (userScore / maxScore) * 100.0;

 

 

//determine test result

cout << "Result Summary" << endl << endl;

if (pctUserScore >= pctPassScore) {

    cout << "Test Result: Pass" << endl;

}

else {

    cout << "Test Result: Fail" << endl;

}

cout << "User Test Score: " << userScore << endl;

cout << "User Percent Score: " << pctUserScore <<  " %" << endl;

cout << "Maximum Score: " << maxScore << endl;

cout << "Percent Pass Score: " << pctPassScore <<  " %" << endl;



            return 0;



}