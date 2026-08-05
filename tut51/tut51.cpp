#include<iostream>
#include<fstream>   
using namespace std;

// The useful classes for working with files in C++ are:
// fstreambase
// ifstream     
// ofstream

//In order to work with files, you need to open them. There are 2 ways to open files:
//1. Using a constructor
//2. Using the member function open() of the class


int main(){
    string st = "harrybhae";
    //Opening files using constructor
    ofstream out("sample51.txt"); // Write operation
    out<<st;

    return 0;
}