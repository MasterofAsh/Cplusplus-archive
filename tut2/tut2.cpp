// Lesson: Comments and Variables

#include<iostream>
using namespace std;

int main() {
    // ============== Comments ================
    // This is a single line comment
    /*
     This 
    is 
    a 
    multiple
    line 
    comment
    */
    // ============== Variables ===================
    int sum = 6;
    string name = "Abdullah";
    char class_name = 'B';
    cout<<name<<" belongs to class "<<class_name<<" and has marks "<<sum<<" in science"<<endl;
    float pi = 3.1469420;
    cout<<"The value of Pi is "<<pi;
    return 0;
}