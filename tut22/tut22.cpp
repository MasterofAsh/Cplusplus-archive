#include <iostream>
using namespace std;

class Employee{

    static int count;
    int id;

    public:
        void setData(void){
            cout<<"Enter the ID: "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"Printing employee's ID: "<<id<<" and this is employee's number"<<count<<endl;
            cout<<id;
        }


        static void getCount(void){
            cout<<"The value of count is: "<<count<<endl;
        }
};

int Employee:: count; // Default value is 0

int main(){
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count = 1; Not possible as both ID and COUNT are private
    harry.setData();
    harry.getData();
    Employee:: getCount();

    rohan.setData();
    rohan.getData();
    Employee:: getCount();

    lovish.setData();
    lovish.getData();
    Employee:: getCount();
    return 0;
}