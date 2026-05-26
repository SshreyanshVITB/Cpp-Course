#include<iostream>
using namespace std;


int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

//fib(5)=fib(3)+fib(4)
//       =fib(1)+fib(2)+fib(2)+fib(3)


int factorial(int n){
    if(n<=1){
        return 1;
    }
  
    return n*factorial(n-1);
}
//Step by step calculation of factorial of 4
// factorial(4)=4*factorial(3)
//            =4*3*factorial(2)
//            =4*3*2*factorial(1)
//            =4*3*2*1
//            =24

int main(){
    //Factorial of a number using recursion
    // 6! =6*5*4*3*2*1 = 720
    // 0! = 1
    //1! = 1
    //n! = n*(n-1)!
int a;

    cout<<"Enter a number: "<<endl;
    cin>>a;
    cout<<"The term in fibbonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}