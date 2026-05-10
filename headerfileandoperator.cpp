// There are two types of header files:
// 1)  System header files: it comes with the compiler

#include<iostream>

// 2)  User defined header files: it is written by the programmer
//#include "ABC.h" // --- This will produce and error if  ABC.h is not present in the current directory if you want you can add a file of ABC.h in the directory

//use cpp refrence from google for the header libraries


using namespace std;
int main(){
    int a=4 , b=5;
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    cout<<endl;
//Arithmetic operators
cout<<"Following are the Arithmetic operators in C++"<<endl;
cout<<"The value of a + b is"<<a+b<<endl;
cout<<"The value of a - b is"<<a-b<<endl;
cout<<"The value of a * b is"<<a*b<<endl;
cout<<"The value of a / b is"<<a/b<<endl;
cout<<"The value of a % b is"<<a%b<<endl;
cout<<"The value of a++ is"<<a++<<endl;
cout<<"The value of a-- is"<<a--<<endl;
cout<<"The value of ++a is"<<++a<<endl;
cout<<"The value of --a is"<<--a<<endl;
cout<<endl;


//Assignment operators --> used to assign values to variables
// int a=3 , b=9;
// char d='d'; 

//Comparison operators 
cout<<"Following are the Comparison operators in C++"<<endl;
cout<<"The value of a == b is "<<(a==b)<<endl;
cout<<"The value of a != b is "<<(a!=b)<<endl;
cout<<"The value of a >= b is "<<(a>=b)<<endl;
cout<<"The value of a <= b is "<<(a<=b)<<endl;
cout<<"The value of a > b is "<<(a>b)<<endl;
cout<<"The value of a < b is "<<(a<b)<<endl;
cout<<endl;

//Logical operators
cout<<"Following are the logical operators in C++"<<endl;
cout<<"The value of this logical and operator ((a == b) && (a<b)) logical operator is "<<((a==b) && (a<b))<<endl;
cout<<"The value of this logical or operator ((a == b) || (a<b)) logical operator is "<<((a==b) || (a<b))<<endl;
cout<<"The value of this logical not operator (!(a == b) logical operator is "<<(!(a==b))<<endl;

return 0;
}