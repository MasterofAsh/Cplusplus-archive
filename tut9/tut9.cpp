#include<iostream>
using namespace std;

int main() {

    /*
    Loop types in C++
    1. While Loop
    2. For Loop
    3. Do While Loop


    For Loops inf C++
    */
    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(c++ code);
    // }

    // for (int i = 0; i < 100; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }
    
    // While Loop in C++
    // While loop syntax
    // while(condition)
    // {
    //     C++ statements;
    // }
    // int i = 1;
    // while (i <= 40)
    // {
    //     /* code */
    //     cout<<i<<endl;
    //     i++;

    // }
    
    // Do While loops in C++
    // Do While loops syntax
    // do
    // {
    //     C++ Statements;
    // }while (condition)
    // int i = 1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (i < 40);

    // Multiplication table of 6
    int i = 6;
    int a = 1;
    for (i = 6; a <= 10; a++)
    {
        /* code */
        cout<<(i * a)<<endl;
    }

    int j = 6;
    int b = 1;
    while (b <= 10)
    {
        cout<<(j*b)<<endl;
        b++;
    }

    int l = 6;
    int c = 1;
    do
    {
        cout<<l * c<<endl;
        c++;
    } while (c <= 10);
    
    
    
    

    return 0;
}