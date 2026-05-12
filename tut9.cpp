#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age : ";
    cin>>age;


    // *************Selection Control Structure -- if else  - if else ladder***********



    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if (age==18){
    //     cout<<"Your are a kid and you will get a kid pass";

    // }
    // else if (age<1){
    //     cout<<"You are not yet born";
    // }

    // else{
    //     cout<<"You can come to party";
    // }



    

    //  *************Selection Control Structure -- Switch case statement***********

     switch (age)
     {
     case 18:
        /* code */
        cout<<"You are 18"<<endl;
        break;
     case 22:
        /* code */
        cout<<"You are 22"<<endl;
        break;
     case 2:
        /* code */
        cout<<"You are 2"<<endl;
        break;
     
     default:
     cout<<"No special case"<<endl;
        break;
     }

     cout<<"Done with switch case";



    return 0;
}