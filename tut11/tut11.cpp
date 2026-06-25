#include<iostream>
using namespace std;

int main(){
    // What is a pointer?
    // It is a data type, a type of variable which holds the address of other data types

    int a = 3;
    int* b = &a;

    // & => Address of Operator
    cout<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * => Dereference Operator
    cout<<"The value at address of b is "<<*b<<endl;

    // Pointer to Pointer
    int** c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value(value_at(c)) is: "<<**c<<endl;


    return 0;
}