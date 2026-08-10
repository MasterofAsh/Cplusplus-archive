#include <iostream>
using namespace std;

template <class T>

class Harry{
    public:
        T data;
        Harry(T a){
            data = a;
        }
        void display();
};

template <class G>
void func(G a){
    cout<<"I am first function"<<a<<endl;
}

void func(int a){
    cout<<"I am first function"<<a<<endl;
}


int main(){
    Harry<float> h(5.7);
    cout<<h.data<<endl;
    h.display();
    func(4);

    return 0;

}

template <class T>
void Harry<T> :: display(){
            cout<<data;
        }