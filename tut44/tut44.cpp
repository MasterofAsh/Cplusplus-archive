#include <iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void getData(){
            cout<<"The real part is: "<<a<<endl<<"The imaginary part is: "<<b<<endl;
        }
        void setData(int x, int y){
            a = x;
            b = y;
        }

};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54);
    ptr->setData(1, 55);
    (*ptr).getData();
    return 0;
}