#include <iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<id<<endl<<price<<endl;
        }
};

int main(){
    int size = 2;
    int p, q;
    Shop *ptr = new Shop [size];
    int *ptr = new int [34];
     Shop *ptrTemp = ptr;
    for (int i = 0  ; i < size; i++)
    {
        cout<<"Enter ID and price of item: "<<i+1<<endl;
        cin>>p>>q;
        (*ptr).setData(p, q);
        ptr++;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i + 1<<endl;
        ptr->getData();
        ptr++;
    }
    

    return 0;
}