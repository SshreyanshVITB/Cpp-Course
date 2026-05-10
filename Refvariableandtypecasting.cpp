#include<iostream>
using namespace std;

// int c = 45;

int main(){
    // //  *********Built in datatypes*********
    // int a,b,c;
    // cout<<"The value of a is :"<<endl;
    // cin>>a;
    // cout<<"The value of b is :"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;  // :: this is scope resolution operator we use it if we want to talk about global variable

    // //   ********* Float , double and long double literals*************
    // float d=34.4f;
    // long double e=34.4l; //l is used for long double

    // // // 34.4f is a  float number but if we remove f or we dont declare a float then it is a double 

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // // //size of () is a lib of c++

    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    
    // //************Reference variables***********
    // // Shreyansh -----> Raj ------> Sheru ----->

    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // **********Type casting**********
    int a = 45;
    float b = 45.45;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    int c  = (int)b; //This can also be done 

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    

    return 0;
} 
