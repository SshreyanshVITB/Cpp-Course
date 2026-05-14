#include<iostream>
using namespace std;

int main(){
    //What is a pointer? ----> data type which holds the address of another datatype 
    int a=3;
    int *b=&a;  //declaration of a pointer
    //or  u can wirte b=&a;
    
    // & is the address of operator
    cout<<"The address of a is :"<<&a<<endl;  
    cout<<"The address of a is :"<<b<<endl;  
   // b is a pointer which holds the address of a
 
 // * is the dereference operator i.e it gives the value at the address stored in the pointer
     cout<<"The value at address b is :"<<*b<<endl; // gives the value at the address stored in b which is 3
    
     // pointer to pointer
      int **c=&b; // pointer to pointer
      cout<<"The address of b is : "<<&b<<endl;
      cout<<"The address of b is : "<<c<<endl;
      cout<<"The value at address c is : "<<*c<<endl;
      cout<<"The value at address value_at(value_at(c)) is : "<<**c<<endl;
     return 0;
     
}