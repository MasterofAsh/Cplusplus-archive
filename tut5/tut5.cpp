// Lesson: Header Files and Operators

// =============== Header Files ===================
/*
Two Types of header files
1. System Defined = Come with the compiler
2. User Defined = Defined by the user / programmer
*/
#include<iostream> // System Defined, refers to a an already defined and created header file by compiler
// #include<abdullah.h> // User Defined, refers to a user defined header file
using namespace std;


int main() {
    // =============== Operators ===============
    // Arithmetic Operators:

    int kaz = 5;
    int man = 10;

    cout<<"Addition of kaz and man is "<<kaz + man<<endl;
    cout<<"Subtraction of kaz and man is "<<kaz - man<<endl;
    cout<<"Multiplication of kaz and man is "<<kaz * man<<endl;
    cout<<"Division of kaz and man is "<<kaz / man<<endl;
    cout<<"'%' of kaz and man is "<<kaz % man<<endl;
    cout<<"kaz++ is "<<kaz++<<endl;
    cout<<"man-- is "<<man--<<endl;
    cout<<"++kaz is "<<++kaz<<endl;
    cout<<"--man is "<<--man<<endl;

    // ================ Assignment Operators ================
    // Simply used to assign values to a variable
    char a = 'b';

    // =============== Comparison Operators ==================

    cout<<"The value of kaz == man is "<<(kaz == man)<<endl;
    cout<<"The value of kaz != man is "<<(kaz != man)<<endl;
    cout<<"The value of kaz >= man is "<<(kaz >= man)<<endl;
    cout<<"The value of kaz <= man is "<<(kaz <= man)<<endl;
    cout<<"The value of kaz > man is "<<(kaz > man)<<endl;
    cout<<"The value of kaz < man is "<<(kaz < man)<<endl;

    // =============== Logical Operators ====================
    cout<<"Value of kaz == man and kaz < man is "<<((kaz == man) && (kaz < man))<<endl;
    cout<<"The value of kaz == man and kaz < man is "<<((kaz == man) or (kaz < man))<<endl;
    cout<<"The value of kaz == man and kaz < man is "<<(!(kaz == man)) <<endl;


    return 0;
}