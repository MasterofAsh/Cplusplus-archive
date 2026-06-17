// Lesson: Variable Scope and Data Types

#include<iostream>
using namespace std;

    // ============ Variable Scope ===============
    /*
    'Global Variables' and 'Local Variables'

    Global = Defined globally, outside a function like "int main"
    Local = Defined inside a function
    Exceptions: 
    1. Global variables can be used globally in any function or outside
    2. Local variables can only be used in the function they were created in
    3. When 2 variables of same name, exist globally and locally, the local one will always get priority
       when getting output
    */
char num = 'b';

int main() {
    // ============ Variable Types ===============
    int number = 95;
    char alphabet = 'X';
    string name = "Ahmed";
    bool truth = true;
    float pi = 3.14;
    double pi_2 = 3.1469420;

    cout<<number<<endl<<alphabet<<endl<<name<<endl<<truth<<endl<<pi<<endl<<pi_2<<endl;
    
    char num = 'z';
    cout<<num;

    return 0;
}