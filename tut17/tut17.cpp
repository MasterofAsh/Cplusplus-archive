#include<iostream>
using namespace std;

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
    // Example working of factorial
    /*
    factorial(4) = 4 * factorial(3);
    factorial(4) = 4 * 3 * factorial(2);
    factorial(4) = 4 * 3 * 2 * factorial(1); // Compiler will recognize that 1 is equal to 1 given above so it will run the IF condition
    factorial(4) = 4 * 3 * 2 * 1;
    factorial(4) = 24;
    */
}

int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    // cout<<"The factorial of a is: "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at positon "<<a<<" is "<<fib(a)<<endl;

    return 0;
}