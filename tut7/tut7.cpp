#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    // int a = 34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is: "<<a<<endl;

    // Constants = declares a variable as only read-able, thus allowing no changes 
    
    // const int a = 3;

    // Manipulators = used for formatting within code
    // "<<endl" and "setw()"

    // int a = 3, b = 42, c = 1233;
    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of a is: "<<setw(4)<<b<<endl;
    // cout<<"The value of a is: "<<setw(4)<<c<<endl;

    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The value of a is: "<<b<<endl;
    // cout<<"The value of a is: "<<c<<endl;

    // Operator Precedence = Allows us to properly give priority to mathematic operators: * > / > % > + > -
    int a = 3, b = 4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    
    return 0;
}