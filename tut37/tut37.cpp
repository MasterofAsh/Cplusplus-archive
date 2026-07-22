#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_rollNumber(int);
        void get_rollNumber(void);
};

void Student :: set_rollNumber(int r){
    roll_number = r;
}
void Student :: get_rollNumber(){
    cout<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout<<"Maths marks: "<<maths<<endl<<"Physics Marks: "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_rollNumber();
            get_marks();
            cout<<"Your percentage is: "<<((maths + physics) / 100) * 100<<"%"<<endl;
        }
};

int main() {
    Result Abdullah;
    Abdullah.set_rollNumber(9045222);
    Abdullah.set_marks(23.5, 42);
    Abdullah.display();
    return 0;
}



// Table for understanding inheritance of classes
/*                      |  Public Derivation|   Private Derivation  |  Protected Derivation |
1. Private Members      |  Not Inherited    |    Not Inherited      |   Not Inherited       |
2. Protected Members    |    Protected      |       Private         |      Protected        |
3. Public Members       |      Public       |       Private         |      Protected        |
*/