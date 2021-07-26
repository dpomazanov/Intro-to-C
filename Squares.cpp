//The while loop below used for input is shown in bold

//Notice that startNum controls the loop (not endNum)

#include <iostream>

#include <string>

using namespace std;

int main()

{

//input using while loop

int num, startNum, endNum;

cout << "Enter start number" << endl;

cin >> startNum;

while (startNum >= 0)

{

                        cout << "Enter end number" << endl;

                        cin >> endNum;

                        //if  startNum > endNum, exchange (switch) the two

                        if (startNum > endNum){
                            int temp;
                            temp = startNum;

                            startNum = endNum;

                            endNum = temp;

                        }

                        //code here

 

 

 

                        //compute the square and the sum of square using a For loop.

int n, nSquared, sos;

sos = 0;

for (n=startNum; n<=endNum; n++)

{

                                    //compute nSquared

                                    nSquared = n * n;

                                    cout << n << "squared = " << nSquared << endl;

//compute sos

                                    sos = sos + nSquared;

         

//more code here

 

 

}

//more code here

 

 cout << "Sum of squares = " << sos << endl;

 

cout << "Enter start number" << endl;

cin >> startNum;

} 

cout << "Bye" << endl;

}