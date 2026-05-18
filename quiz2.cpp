//Write a C++ program to demonstrate the difference between 
//Call by Value and Call by Reference by swapping two numbers using both methods.




#include<iostream>
using namespace std;

// Call by Value
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Call by Value:" << endl;
    cout << "a = " << a << " b = " << b << endl;
}

// Call by Reference
void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Call by Reference:" << endl;
    cout << "a = " << a << " b = " << b << endl;
}

int main() {

    int x = 10, y = 20;

    cout << "Before Call by Value:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    swapValue(x, y);

    cout << "After Call by Value:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    cout << endl;

    cout << "Before Call by Reference:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    swapReference(x, y);

    cout << "After Call by Reference:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}