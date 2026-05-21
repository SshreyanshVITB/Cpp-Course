#include<iostream>
using namespace std;

// inline int product(int a , int b){
//     return a*b;
//we use inline function when we have to call a function multiple times in our program and the function is small and simple. It is a request to the compiler to replace the function call with the actual code of the function. This can improve the performance of the program by reducing the overhead of function calls. However, it is important to note that the compiler may choose to ignore the inline request if the function is too complex or if it is called too many times in the program.

//Not recommended to use inline function when the function is recursive or when the function has a large number of statements. In such cases, the compiler may choose to ignore the inline request and generate a regular function call instead.
// static int product(int a , int b){
//     static int c = 0; // This will be initialized only once and will retain its value between function calls
//     c = c + 1; // Increment the count of function calls 
//     return a*b+c; // Return the product of a and b plus the count of function calls

inline int product(int a , int b){
    return a*b;
}

float moneyRecieved(int currentMoney , float factor = 1.04){  //Default argument is used when we want to provide a default value for a parameter in a function. If the caller does not provide a value for that parameter, the default value will be used. In this case, if the caller does not provide a value for the factor parameter, it will default to 1.04.
    return currentMoney*factor;
}

// int strlen(const char* p){
  //we use const char* p to indicate that the function will not modify the string pointed to by p. This is a common practice in C++ to ensure that functions do not accidentally modify data that they should not be modifying. By using const, we can also allow the function to accept string literals and other read-only strings without causing a compilation error.
// }
int main(){
    int a , b;
    // cout<<"Enter the value of a and b : "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyRecieved(money)<<" Rs after 1 year."<<endl;
    cout<<"For VIP If you have "<<money<<" Rs in your bank account, you will receive "<<moneyRecieved(money , 1.1)<<" Rs after 1 year."<<endl;
    return 0;
    
}