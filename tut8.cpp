#include<iostream>
#include<iomanip>
using namespace std;

int main(){
//     int a = 45;
//     cout<<"The value of a was :"<<a<<endl;
//     a = 34;
//     cout<<"The value of a is :"<<a;

// *********Constants in C++************
// const int a = 45; //Const are used so that we cant change the value of the variable as shown above 
//     cout<<"The value of a was :"<<a<<endl;
 
//         a = 34; // here u will get error
//     cout<<"The value of a is :"<<a;

// ***************Manipulator is C++**************
// int a=3 , b=78 , c=1233;
// cout<<"The value of a without setw is :"<<a<<endl;
// cout<<"The value of b without setw is :"<<b<<endl;
// cout<<"The value of c without setw is :"<<c<<endl;

// cout<<"The value of a is :"<<setw(4)<<a<<endl;
// cout<<"The value of b is :"<<setw(4)<<b<<endl;
// cout<<"The value of c is :"<<setw(4)<<c<<endl;


// *********operator precedence************ You can see operator precedence from Cppreference.com
int a=3 , b=4;
//int c = (a*5)+b;
int c = ((((a*5)+b)-45)+87);

cout<<c;


    return 0;
}