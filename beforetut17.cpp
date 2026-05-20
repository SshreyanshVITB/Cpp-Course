#include<iostream>
using namespace std;

// Inline Function
inline int multiply(int a, int b){
    return a * b;
}

// Function with Default Argument
float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

// Function with Constant Argument
void display(const int x){
    // x = x + 5; // Error: cannot modify constant argument
    cout << "The value of x is: " << x << endl;
}

int main(){

    // Inline Function Example
    cout << "Multiplication using inline function: "
         << multiply(4, 5) << endl;

    // Default Argument Example
    cout << "Money received with default interest: "
         << moneyReceived(1000) << endl;

    cout << "Money received with custom interest: "
         << moneyReceived(1000, 1.10) << endl;

    // Constant Argument Example
    int num = 10;
    display(num);

    return 0;
}