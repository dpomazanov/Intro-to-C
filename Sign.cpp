
#include <iostream>

#include <string>

using namespace std;


int main ( )
{

// declare variables

float month, day;
string sign;


 
 
cout << "Enter your birth month as a whole number <1-12>:" << endl;

cin >> month;


cout << "Enter your birth day as a whole number:" << endl;

cin >> day;
 

 /*

The code below shows only a part of an if /else if statement that calculates the commission amount from the sales amount. The if/else if statement below needs to be completed by adding additional if else components. In the statement below, the variable sales contains the sales amount and the variable commission the commission amount. Both the sales and commission are variables of type double.

 */

 

if (  (  (month == 3)  &&  ( day>=21  )  ) ||

       (  ( month == 4 )  &&  ( day <=19 )  )  )

{

          sign = "Aries";

}

 else if (  (  (month == 4)  &&  ( day> 19  )  ) ||

       (  ( month == 4 )  &&  ( day <=20 )  )  )

{

          sign = "Taurus";

}


else if (  (  (month == 5)  &&  ( day> 20  )  ) ||

       (  ( month == 6 )  &&  ( day <=20 )  )  )

{

          sign = "Gemini";

}


else if (  (  (month == 6)  &&  ( day> 20  )  ) ||

       (  ( month == 7 )  &&  ( day <=22 )  )  )

{

          sign = "Cancer";

}

else if (  (  (month == 7)  &&  ( day> 22  )  ) ||

       (  ( month == 8 )  &&  ( day <=22 )  )  )

{

          sign = "Leo";

}

else if (  (  (month == 8)  &&  ( day> 22  )  ) ||

       (  ( month == 9 )  &&  ( day <=22 )  )  )

{

          sign = "Virgo";

}


else if (  (  (month == 9)  &&  ( day> 22  )  ) ||

       (  ( month == 10 )  &&  ( day <=22 )  )  )

{

          sign = "Libra";

}

else if (  (  (month == 10)  &&  ( day> 22  )  ) ||

       (  ( month == 11 )  &&  ( day <=21 )  )  )

{

          sign = "Scorpio";

}

else if (  (  (month == 11)  &&  ( day> 21  )  ) ||

       (  ( month == 12 )  &&  ( day <=22 )  )  )

{

          sign = "Sagittarius";

}

else if (  (  (month == 12)  &&  ( day> 21  )  ) ||

       (  ( month == 1 )  &&  ( day <=19 )  )  )

{

          sign = "Capricorn";

}

else if (  (  (month == 1)  &&  ( day> 19  )  ) ||

       (  ( month == 2 )  &&  ( day <=18 )  )  )

{

          sign = "Aquarius";

}

else if (  (  (month == 2)  &&  ( day> 18  )  ) ||

       (  ( month == 3 )  &&  ( day <=20 )  )  )

{

          sign = "Pices";

}

cout << "Your Birth Month:  " << month << endl;
cout << "Your Birth Day:  " << day << endl;

cout << "Your Astrological Sign:  " << sign << endl;



            return 0;



}