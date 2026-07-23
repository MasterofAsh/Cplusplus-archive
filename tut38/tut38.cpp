#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class Derived : visibility-mode base 1, visibility-mode base 2{
//     class body of "Derived"
// }

class Base1{
    protected:
        int base1int;
    public:
        void set_baseint1(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void set_baseint2(int a){
            base2int = a;
        }
};

class Derived : public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of base1 int is: "<<base1int<<endl;
            cout<<"The value of base2 int is: "<<base2int<<endl;
            cout<<"The sum of both these bases is: "<<base1int + base2int<<endl;
        }
};

int main(){
    Derived run;
    run.set_baseint1(2);
    run.set_baseint2(3);
    run.show();
    return 0;
}