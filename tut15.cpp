#include<iostream>
using namespace std;
//Function prototype
//Type function_name (arguments);
// int sum(int a, int b); // ---->Acceptable
// int sum(int a,  b); // ----> Not Acceptable
int sum(int , int ); // ---->Acceptable
void g(); // ---->Acceptable
 //Function prototype is used to declare the function before it is defined. It is used to tell the compiler about the function name, return type and parameters. It is also used to avoid the error of implicit declaration of function.
//Function prototype is used kyuki vo kehta h fucntion milega dhundho it gives assurity


int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    //num1 and num2 are actual parameters or arguments. They are the values that are passed to the function when it is called. They are also called as actual arguments.
    cout<<"The sum is: "<<sum(num1, num2)<<endl; //The value of num 1 will be passed to a and num 2 will be passed to b and the sum will be returned to the main function and printed on the screen.
g(); //Function call. It is used to call the function g and execute the code inside the function g. It is also used to print the message "Hello World!. Good Morning" on the screen.
    return 0;
}
int sum(int a, int b){
    //a and b are formal parameters.They are used to take value from the actual parameters num1 and num2 . They are the variables that are used in the function definition. They are also called as formal arguments. They are used to receive the values that are passed to the function when it is called.
    int c = a + b;
    return c;
}
void g(){
    cout<<"\nHello World!. Good Morning"<<endl;
}



