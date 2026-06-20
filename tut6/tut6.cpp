// Lesson: Reference Variables and Typecasting

#include<iostream>
using namespace std;

int c = 69; 

int main() {

    // ============= Calling global & local Variables ================
    int a,b,c;

    cout<<"Provide value for 'a': "<<endl;
    cin>>a;
    cout<<"Provide value for 'b': "<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum of 'a' and 'b' is: "<<c<<endl;
    cout<<"The global c is: "<<::c<<endl;

    // ============= Reference Variables ================

    float x = 420;
    float & y = x;
    cout<<y<<endl;

    // ============== Typecasting Variables =============
    float w = 45.5;
    cout<<(int)w;
    return 0;
}