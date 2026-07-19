#include <iostream>
using namespace std;

//Base Class
class Employee{
    public:
        int id;
        float salary;
        Employee (int inpID){
            id = inpID;
            salary = 34.64;
        }
        Employee(){}

};

// Derived Class Syntax:
// class (derived-Programmer) : (visibility-mode) (base class name)
// Default visibility mode is: Private
// Private Visibility mode: Public members of the base class becomes private members of the derived class
// Public Visibility mode: Public members of the base class becomes public members of the derived class
// Private members of the base class will never become any member of the derived class, hence they are never inherited
//Creating a derived class from base class

class Programmer : public Employee{
    public:
        Programmer(int INPid){
            id = INPid;
        }
        int languageCode = 9;
        void getData(){
            cout<<id<<endl;
        }
};

int main(){
    Employee Harry(1), Rohan(2);
    cout<<Harry.salary<<endl;
    cout<<Rohan.salary<<endl;
    Programmer skillF(110);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}