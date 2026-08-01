#include<iostream>
using namespace std;

class Base1{
    public:
        int var1;
        void display(){
            cout<<var1<<endl;
        }
};

class Derived : public Base1{
    public:
        int var2;
        void display(){
            cout<<var2<<endl;
        }
};  

int main(){
    Base1* baseClassPointer;
    Base1 objB;

    Derived objD;
    baseClassPointer = &objD;

    baseClassPointer->var1 = 34;
    baseClassPointer->display();

    Derived* derivedClassPointer;
    derivedClassPointer = &objD;

    derivedClassPointer->var2 = 98;
    derivedClassPointer->display();
    return 0;
}