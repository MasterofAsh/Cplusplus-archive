#include <iostream>
using namespace std;

class Base1{
    public:
        int var1 = 1;
        virtual void display(){
            cout<<var1<<endl;
        }
};

class Derived : public Base1{
    public:
        int var2 = 2;
        void display(){
            cout<<var2<<endl;
        }
};  


int main(){
    Base1* baseClassPointer;
    Base1 objBase;
    Derived objDerived;

    baseClassPointer = &objDerived;
    baseClassPointer->display();
    return 0;
}