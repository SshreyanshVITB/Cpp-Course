#include<iostream>
int glo = 6;
void sum(){
    int a;
    std::cout<<glo;
}
int main(){
    int glo = 9;
    glo=78;
    sum();
    std::cout<<glo; //Local variable is given precedence over global

    bool is_true = true;
    std::cout<<is_true;
    // int a = 4;
    // int b = 5;
    int a = 4 , b = 5; //Same work it will do

    float pi = 3.14;

    char c = 'u'; //only add one character otherwise you'll get wrong output 


    std::cout<<"This is tutorial 4.\nHere the value of a is "<<a<< ".\nThe value of b is  "<< b;  //\n is used for  line change

    std::cout<<"\nThe value of pi is: "<< pi;

    std::cout<<"\nThe value of c is: "<< c;

    return 0;
}