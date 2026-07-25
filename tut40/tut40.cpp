#include <iostream>
using namespace std;

class Student{
    protected:
        int rollNumber;
    public:
        void setRollNumber(int a){
            rollNumber = a;
        }
        void printNumber(void){
            cout<<rollNumber<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void printMarks(void){
            cout<<maths<<endl<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void setScore(float sc){
            score = sc;
        }
        void printScore(void){
            cout<<score<<endl;
        }
}; 

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            printNumber();
            printScore();
            printMarks();
            cout<<"Your total marks are: "<<total<<endl;
        }
};

int main(){

    Result show;
    show.setMarks(78, 64);
    show.setRollNumber(9045222);
    show.setScore(16);
    show.display();

    return 0;
}