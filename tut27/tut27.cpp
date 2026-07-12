#include <iostream>
using namespace std;

class Complex {
    int a, b;
    public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class
    // It is used to intialize the objects of its class, it is automatically invoked.
        Complex(void); // Constructor declaration

        void printNumber(){
            cout<<"Your number is: "<<a<<" + "<<b<<"i."<<endl;
        }
};

Complex :: Complex(void){
    a = 10;
    b = 0;
}

int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}