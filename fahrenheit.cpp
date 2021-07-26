#include <iostream>

#include <string>

using namespace std;


int main ( )

{

//declare double variables for holding decimal values  

double f, c;

 

//Input numbers

cout << "Enter Temperature in Fahrenheit" << endl;

cin >> f;



//compute the temperature in centigrade

c = (5.0 / 9.0) * (f - 32.0);


 

//display the first line of the output

cout << "Temperature in Fahrenheit: " << f << endl;

 

//display the second line of the output.

 
cout << "Temperature in Centigrade: " << c << endl;

 

            return 0;

}