#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kese ho tum?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1 :: greet();
        }

};

class B{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};

class D : public B{
    int a;
    public:
        void say(){
            cout<<"Hello niggers"<<endl;
        }
};

int main(){
    // Base1 obj1;
    // Base2 obj2;
    // Derived obj3;

    // obj1.greet();
    // obj2.greet();
    // obj3.greet();
    B obj2;
    D obj1;
    obj2.say();
    obj1.say();
    return 0;
}