#include<iostream>
using namespace std;

int main(){
//     for (size_t i = 0; i < 40; i++)
//     {
//         /* code */
       
//     if(i==2){
//         break;
//     }
//      cout<<i<<endl; //if this is written before for loop then 0 1 2 will be printed but here only 0 1
// }
    for (size_t i = 0; i < 40; i++)
    {
        /* code */
       
    if(i==2){
        continue; //skips 2 and print all
    }
     cout<<i<<endl; 
}


    
    return 0;
}