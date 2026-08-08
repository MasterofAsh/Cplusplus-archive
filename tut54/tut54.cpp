#include <iostream>
using namespace std;

template< class T1=int, class T2 = float>
class Harry{
    public:
        T1 a;
        T2 b;
        Harry(T1 x, T2 y){
            a = x;
            b = y;
        }
        void display(){
            cout<<this->a<<endl<<this->b<<endl;
        }
};

int main(){
    Harry<> h(1, 1.69);
    h.display();
    return 0;
}