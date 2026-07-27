#include<iostream>
using namespace std;

/*
Syntax for initialization:

constructor(argument-list) : initialization-section{
    assignment + other code;
}
*/

class Test{
    int a, b;
    public:
        Test(int i, int j) : a(i), b(j){
            cout<<"Constructor executed!"<<endl;
        }
};

int main(){
    Test t(4, 6);
    return 0;
}