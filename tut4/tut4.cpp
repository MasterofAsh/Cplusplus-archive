// Lesson: Basic Input and Output

#include<iostream>
using namespace std;

int main() {
    // ============= Input and Output ================
    /*
    "<<" Is called an insertion operator
    ">>" Is called an extraction operator
    */
    int num1, num2;
    cout<<"Please give a number: "<<endl;
    cin>>num1;
    cout<<num1;

    cout<<"Please give another number: "<<endl;
    cin>>num2;
    cout<<num2;

    return 0;
}