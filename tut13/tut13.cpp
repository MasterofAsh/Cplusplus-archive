#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eAge;
    string eName;
    float eSalary;
}emp ;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main() {

    enum Meal{breakfast, lunch, dinner};
    Meal m1 = dinner;
    cout<<m1<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;


    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car<<endl;

    // emp harry;
    // harry.eAge = 12;
    // harry.eName = "nigga";
    // harry.eSalary = 15000;

    // cout<<harry.eSalary<<endl;
    // cout<<harry.eAge<<endl;
    // cout<<harry.eName<<endl;

    return 0;
}