#include<iostream>
using namespace std;

int main() {

    // Selection Control Structure: If-else else-if else ladder
    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;
    
    // if((age < 18) && (age>0)){
    //     cout<<"You cannot come to my party"<<endl;
    // }
    // else if(age == 18) {
    //     cout<<"You are still young"<<endl;
    // }
    // else if(age < 1) {
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to my party"<<endl;
    // }

    // Selection Control Structure: Switch Case Statements
    switch (age)
    {
    case 18:
        /* code */
        cout<<"You are 18"<<endl;
        break;
    
    case 22:
        cout<<"You are 22"<<endl;
        break;

    case 2:
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases left"<<endl;
        break;
    }
    cout<<"done with switch-case"<<endl;

    return 0;
}