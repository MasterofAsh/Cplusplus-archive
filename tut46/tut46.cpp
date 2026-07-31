#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A& setData(float a){
            this->a = a;
            return *this;
        }
        void getData(){
            cout<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
    return 0;
}