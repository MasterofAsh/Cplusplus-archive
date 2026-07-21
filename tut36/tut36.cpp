#include <iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
};
// For a protected member:

class derived : public Base{

};

int main(){
    Base b;
    derived d;  
    cout<<b.a;
    return 0;
}