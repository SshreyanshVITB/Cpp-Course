#include<iostream>
using namespace std;
int sum (int a, int b){
    int c = a + b;
    return c;

}
//This will not swap the values of a and b in main function because we are passing the values of a and b to the function swap and not the reference of a and b. So, the changes made to a and b in the function swap will not affect the values of a and b in the main function. To swap the values of a and b in the main function, we need to pass the reference of a and b to the function swap. We can do this by using pointers or by using reference variables.

//call by reference using pointers
// void swapPointer(int *a, int *b){ //temp a b
//     int temp = *a;         // 4   4 5
//      *a = *b;              // 4   5 5
//     *b = temp;             // 4   5 4
    
    // cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;


    //call by reference using reference variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;         // 4   4 5
    a = b;               // 4   5 5
    b = temp;           // 4   5 4
//return a;   // Return the reference to the swapped value
}

int main(){
    int a = 4, b = 5;

// cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
int x = 4, y = 5;
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//swap(x,y); This will not swap a and b
//swapPointer(&x,&y); // This will swap a and b using pointers
swapReferenceVar(x,y); // This will swap a and b using reference variables
// swapReferenceVar(x,y) = 766; // This will swap a and b using reference variables
cout<<"Now the value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}