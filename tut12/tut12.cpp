#include<iostream>
using namespace std;

int main(){
    // Array Examples
    int marks[] = {23, 45, 12, 56};
    int mathMarks[4];
    mathMarks[0] = 78;
    mathMarks[1] = 24;
    mathMarks[2] = 14;

    // cout<<"These are math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;

    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2] = 46912; // Value of an array can also be changed before the value is printed or outputteds
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks: "<<i<< " is "<<marks[i]<<endl;
    // }

    // The same with while and do while loops

    // int i = 0;
    // while (i < 4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }
    
    // int i = 0;
    // do
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // } while (i < 4);

    // Pointers and Arrays
    int* p = marks;
    cout<<*(p++);
    cout<<*(++p);
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[0] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[0] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[0] is "<<*(p+3)<<endl;
    
    
    
    

    return 0;
}