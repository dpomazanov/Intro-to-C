#include <iostream>

#include <string>

using namespace std;

 

int main ( )

{

            //create string type variables (memory boxes) to receive input data

string name, addr, phone, email;

 

//Input name

cout << "Enter Name:" << endl;

getline (cin, name);

 

//Input address

cout << "Enter Address:" << endl;

getline (cin, addr);

 
//Input phone

cout << "Enter Phone:" << endl;

getline (cin, phone);

 

//Input email

cout << "Enter Email" << endl;

getline (cin, email);
 

//Display output;

cout << "Personal Information" << endl;

cout << "Name: " << name << endl;

cout << "Address: " << addr << endl;

cout << "Phone: " << phone << endl;

cout << "Email: " << email << endl;

 

 return 0;

 }