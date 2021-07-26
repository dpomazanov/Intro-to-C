
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

string grade;

string name;

double score;

int aCount=0, bCount=0, cCount=0, dCount=0, fCount=0;

//Initias setup

cout << "Enter student name" << endl;

cin >> name;

 

//Test

while  (name != "//")

{

    cout << "Enter student score" << endl;

    cin >> score;

   

    if (score>=90.0){

         grade = "A";

         aCount++;

    }

    else if (score>=80.0){

          grade = "B";

          bCount++;

    }

     //more code here

    else if (score>=70.0){

          grade = "C";

          cCount++;

    }

    else if (score>=60.0){

          grade = "D";

          dCount++;

    }

    else {

          grade = "F";

          fCount++;

    }
 

    cout << name << " " << score << " " << grade << endl;

    //Update setup

    cout << "Enter student name" << endl;

    cin >> name;

}

int totalCount=aCount+bCount+cCount+dCount+fCount;

//display summary report

cout<<"Total Students count " << totalCount << endl; 

//more code here

cout<<"A Students count " << aCount << endl; 
cout<<"B Students count " << bCount << endl; 
cout<<"C Students count " << cCount << endl; 
cout<<"D Students count " << dCount << endl; 
cout<<"F Students count " << fCount << endl; 



            return 0;



}