#include <iostream>

#include <string>

using namespace std;


int main ( )

{

//declare double variables for holding decimal values  

double n1, n2, larger;

cout << "Enter the First Number:" << endl;

cin >> n1;

cout << "Enter a Different Second Number:" << endl;

cin >> n2;



//compute

if (n1 >= n2) {

            larger = n1;

}

else {

            larger = n2;

}

 

//display the second line of the output.

 
cout << "First number: " << n1 << endl;
cout << "Second number: " << n2 << endl;
cout << "Larger number: " << larger << endl;


 

            return 0;

}