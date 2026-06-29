#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

void swap(int a, int b){ // temp a, b
    int temp = a;        //  4   4  5
    a = b;               //  4   5  5
    b = temp;            //  4   5  4
}

// Call by Reference using Pointers
void swapPointer(int* a, int* b){ // temp a, b
    int temp = *a;        //  4   4  5
    *a = *b;               //  4   5  5
    *b = temp;            //  4   5  4
}

// Call by Reference using Reference Variables
int & swapReferenceVar(int& a, int& b){ // temp a, b
    int temp = a;        //  4   4  5
    a = b;               //  4   5  5
    b = temp;            //  4   5  4
    return b;
}

int main(){
    int a = 4, b = 5;
    cout<<"The sum of 4 and 5 is: "<<sum(a, b)<<endl;
    cout<<"The value of a is: "<<a<<" and the value of b is: "<<b<<endl;
    // swapPointer(&a, &b); <= This will swap 'a' and 'b' using pointer reference
    swapReferenceVar(a, b) = 766; // This will swap 'a' and 'b' using reference variables
    cout<<"The value of a is: "<<a<<" and the value of b is: "<<b<<endl;

    return 0;
}