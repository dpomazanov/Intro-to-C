#include <iostream>

#include <string>

using namespace std;

void input (double x[], int length)

{

int i;

for (i=0; i<length; i++)

{

            cout << "Enter a data value" << endl;

            cin >> x[i];

}

}

void display (double x[], int length)

{

int i;

 

for (i=0; i<length; i++)

{

            cout << x[i] << " ";

}

cout << endl;

}

void copy (double source[], double dest[], int length)

{

         int i;

for (i=0; i<length; i++)

{

          dest[i] = source[i];

} 

}

//function sort

void sort (double x [], int length)

{

int i;

double temp;

bool swapDone = true;

while (swapDone)

{

            swapDone = false;

            for (i=0; i<length-1; i++)

            {

                        if (x[i] > x[i+1])

                        {

                                    swapDone = true;

                                    temp = x [i];

                                    x[i] = x [i+1];

                                    x [i+1] = temp;

                        }

            }

}

 

} 

//main function

int main ( )

{

       int length;

       double data[20];

       double sdata[20];

 

       cout << "Enter data values count <1-20>" << endl;

       cin >> length;

        if (length <= 20 && length >= 1)
        {
            //call input function to input the array

       input (data, length);

 

       //call copy function to copy data array into sdata array

        copy (data, sdata, length);

 

       //call sort function to sort sdata array

 

        sort (sdata, length);

 

       cout << "Original data: " << endl;

       //call display function to display data array

 
        display (data, length);


 

 

       cout << "Sorted data: " << endl;

       //call display function to display sdata array

        display (sdata, length);

        }
        else{
            cout << "Data values count is NOT within required range. Required range is 1 to 20." << endl;
        }
        
        cout << "Bye" << endl;



}