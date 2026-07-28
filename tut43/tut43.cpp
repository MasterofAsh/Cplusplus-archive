#include<iostream>
using namespace std;



int main(){

    int a = 4;
    int* ptr = &a;
    
    int *p = new int(40);
    cout<<"The value at address p is: "<<*p<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout<<"The value at adress arr is: "<<arr[1]<<endl;

    

    return 0;
}