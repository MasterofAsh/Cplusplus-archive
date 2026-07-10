#include <iostream>
using namespace std;

// Forward Declaration
class complex;

class Calculator{

    public:
        int add(int a, int b){
            return (a + b);
        }

        int sumComplex(complex, complex);
        int sumCompComplex(complex, complex);
};

class complex{
    int a, b;
    // friend int Calculator :: sumComplex(complex o1, complex o2);
    // friend int Calculator :: sumCompComplex(complex o1, complex o2);

    friend class Calculator;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"Your number is: "<<a<<" + "<<b<<"i."<<endl;
        }
};

int Calculator :: sumComplex(complex o1, complex o2){
    return(o1.a + o2.a);
}
int Calculator :: sumCompComplex(complex o1, complex o2){
    return(o1.b + o2.b);
}

int main() {
    complex o1, o2;

    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;

    int res = calc.sumComplex(o1, o2);
    int resComp = calc.sumCompComplex(o1, o2);

    cout<<"The sum of real part of o1 and o2 is: "<<res<<endl;
    cout<<"The sum of real part of o1 and o2 is: "<<resComp<<endl;

    return 0;
}