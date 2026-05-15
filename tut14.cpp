#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
} Ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
enum Meal { breakfast, lunch, dinner };
Meal m1 = lunch;

cout<<m1<<endl;
// cout<<breakfast<<endl;
// cout<<lunch<<endl;
// cout<<dinner<<endl;

//    union money m1;
//    m1.rice = 34;
//    // cout<<m1.rice<<endl;
//    m1.car = 'c';
//    cout<<m1.car<<endl;

    //ep shreyansh;
    // struct employee shreyansh; //struct employee can be replaced by Ep as we have used typedef to create an alias for struct employee as Ep. So we can also write Ep shreyansh; instead of struct employee shreyansh;
    // struct employee raj;
    // struct employee shourya;
    // shreyansh.eID = 1;
    // shreyansh.favChar = 's';
    // shreyansh.salary = 120000000;
    // cout<<"The value is "<<shreyansh.eID<<endl;
    // cout<<"The value is "<<shreyansh.favChar<<endl;
    // cout<<"The value is "<<shreyansh.salary<<endl;



    return 0;
}