
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

// declare variables

double sales, commission;

 
 
cout << "Enter Sales Amount:" << endl;

cin >> sales;
 

 /*

The code below shows only a part of an if /else if statement that calculates the commission amount from the sales amount. The if/else if statement below needs to be completed by adding additional if else components. In the statement below, the variable sales contains the sales amount and the variable commission the commission amount. Both the sales and commission are variables of type double.

 */

 

if (sales <= 2000.00)

{

            commission = .15 * sales;

}

else if (sales <= 3000.00)

{

            commission = (.15 * 2000.00) + ( (sales - 2000.00) * .20 );

}

else if (sales <= 3500.00)

{

       commission = (.15 * 2000.00) + (.20 * 1000.00) + ( (sales - 3000.00) * .25 ) ;

}

else if (sales <= 4000.00)

{

       commission = (.15 * 2000.00) + (.20 * 1000.00) + (.25 * 500.00) + ( (sales - 3500.00) * .30 ) ;

}

else if (sales <= 4500.00)

{

       commission = (.15 * 2000.00) + (.20 * 1000.00) + (.25 * 500.00)+ (.30 * 500.00) + ( (sales - 4000.00) * .35 ) ;

}


else

{

 

 

} 

cout << "Sales Amount: " << sales << endl;
cout << "Commission Earned: " << commission << endl;



            return 0;



}