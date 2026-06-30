#include<iostream>
using namespace std;

inline int product(int a, int b){  //Inline functions are good for making functions work faster in small code
    // it is not suitable for large amount of code
    // Inline is not good to use with static variables
    // static int c = 0; // Static variables execute only once
    // c = c+1; // Value of static variable retains
    return a*b;
}

float moneyRecieved(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

int strlen(const char *p){

    
}

int main(){

    int a, b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    // cout<<"The product of a and b is: "<<product(a, b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyRecieved(money)<<" Rs after one year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyRecieved(money, 1.10)<<" Rs after one year"<<endl;

    return 0;
}