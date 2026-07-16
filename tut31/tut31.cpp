#include <iostream>
using namespace std;

class bankDeposit{
    int Principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        bankDeposit(){}
        bankDeposit(int p, int y, float r);
        bankDeposit(int p, int y, int r);
        void show();
        
};

bankDeposit :: bankDeposit(int p, int y, float r){
    Principal = p;
    years = y;
    interestRate = r;
    returnValue = Principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
    
}
bankDeposit :: bankDeposit(int p, int y, int r){
    Principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = Principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void bankDeposit :: show(){
    cout<<endl<<"Principal ammount was "<<Principal<<endl<<" Return value after "<<years<<" is "<<returnValue<<endl;
}

int main(){
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();

    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p, y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankDeposit(p, y, R);
    bd2.show();
    return 0;
}