#include <iostream>

#include <string>

using namespace std;


int main ( )
{

/*

Declare variables t1, t2 and t3 for storing test scores and a1, a2, a3 and a4 for storing assignment scores. The variable pct is used for storing overall percentage. The variable grade is used for scoring the final letter grade

*/

double t1, t2, t3, a1, a2, a3, a4, pct;

string grade;

 

//write code below to input one by one the test and assignment scores in the above variables

 

 cout << "Enter Scores Test 1:" << endl;

cin >> t1;

cout << "Enter Scores Test 2:" << endl;

cin >> t2;
 
cout << "Enter Scores Test 3:" << endl;

cin >> t3;

cout << "Enter Scores Assignment 1:" << endl;

cin >> a1;

cout << "Enter Scores Assignment 2:" << endl;

cin >> a2;
 
cout << "Enter Scores Assignment 3:" << endl;

cin >> a3;

cout << "Enter Scores Assignment 4:" << endl;

cin >> a4;

 

 

 

//compute the overall percentage scores

 

pct = (  (  (t1 + t2 + t3  ) / 3.0 ) * .70 ) + ( ( ( a1 + a2 + a3 + a4  ) / 4.0 ) * .30 );

 

//compute final grade on the basis of pct scores using if/else if statement

 

if (pct >= 90) {

    grade = "A";

}

else if (pct >= 80) {

    grade = "B";

}

else if (pct >= 70) {

    grade = "C";

}

else if (pct >= 60) {

    grade = "D";

}

else {

    grade = "F";

}
 

//complete the above if/else if statement


cout << "Test Scores: " << t1 << "," << t2 << "," << t3 << endl;

cout << "Assignment Scores: " << a1 << "," << a2 << "," << a3 << "," << a4 << endl;

cout << "Overall Percentage: " << pct << " %" << endl;

cout << "Final Grade: " << grade << endl;



            return 0;

}