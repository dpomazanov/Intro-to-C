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

double findMax ( double sdata [ ], int dataLength)

{

      //The max value will be the value of the last element in array sdata.

      //It will be at index dataLength -1 in array sdata.     

        double max;

        max = sdata [dataLength - 1];

            return max;

}

double findMin ( double sdata [ ], int dataLength)

{

           double min;

            min = sdata [0];

            return min;

}

double findMean (double sdata[], int dataLength)

{

int i;

double sum, mean;

 

sum = 0;

for (i=0; i<dataLength; i++)

{

          sum = sum + sdata [i];

}

mean = sum / dataLength;

return mean;

}

double findMedian (double sdata[], int dataLength)

{     

          int index, indexHi, indexLo;

          double median=0;

          //Determine if the dataLength is odd or even.

          if ( (dataLength %2) != 0 )

          {

                   index = dataLength / 2;

                   median = sdata [index];

          }

          else

          {

                   indexHi = dataLength / 2;

                   indexLo = indexHi - 1;

                   median = (sdata[indexLo] + sdata[indexHi] ) / 2;

          }

            return median;

}

//main function

int main ( )

{

       int dataLength;

       double data[20];

       double sdata[20];

 

       cout << "Enter data count <1-20>" << endl;

       cin >> dataLength;

 

       //call input function to input the array

       input (data, dataLength);

 

       //call copy function to copy data from array data into array sdata

      copy (data, sdata, dataLength);

 

       //call sort function to sort data in array sdata

 
        sort (sdata, dataLength);

 

       //call function findMin to find min and pass it array sdata

       double min=findMin(sdata, dataLength);

 

       //call function findMax to find max and pass it array sdata

      

        double max = findMax ( sdata, dataLength);

       //call function findMean to find mean and pass it array sdata

        double mean = findMean (sdata, dataLength);

 

       //call function findMedian to find median and pass it array sdata

        double median = findMedian (sdata, dataLength);

 

        cout << "Original data: " << endl;

        //call function display to display filled part of the array data

        display (data, dataLength);

 

        cout << "Sorted data: " << endl;

        //call function display to display filled part of array sdata

 
        display (sdata, dataLength);
           

        //display min value using cout

        cout << "Min value: " << min << endl;

 

        //display max value using cout

       
        cout << "Max value: " << max << endl;

 

        //display mean value using cout

        cout << "Mean value: " << mean << endl;

 

        //display median value using cout

 
         cout << "Median value: " << median << endl;

 

        return 0;

}