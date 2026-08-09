#include <iostream>
using namespace std;

template< class T1, class T2 >

int funcAverage(T1 a, T2 b){
    float avg = (a + b)/2.0;
    return avg;
}
template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
// int funcAverage2(int a, int b){
//     float avg = (a + b)/2.0;
//     return avg;
// }

int main(){
    float a;
    a = funcAverage(5, 3);
    printf("%.3f", a);

    int x = 5, y = 7;
    swapp(x, y);
    cout<<endl<<x<<endl<<y<<endl;
    return 0;
}