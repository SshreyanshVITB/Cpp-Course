//Arrays using while and do-while loop


#include<iostream>
using namespace std;

int main(){

    // Array example
    int marks[4] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 23;
    mathMarks[1] = 45;
    mathMarks[2] = 56;
    mathMarks[3] = 89;

    cout << "These are math marks using while loop:" << endl;

    // WHILE LOOP
    int i = 0;
    while(i < 4)
    {
        cout << mathMarks[i] << endl;
        i++;
    }

    // Changing array value
    marks[2] = 455;

    cout << "\nThese are marks using do-while loop:" << endl;

    // DO-WHILE LOOP
    int j = 0;
    do
    {
        cout << "The value of marks " << j << " is: " << marks[j] << endl;
        j++;
    } while(j < 4);

    return 0;
}

//while loop → checks condition first, then runs.
//do-while loop → runs once first, then checks condition.
