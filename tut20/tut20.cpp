#include <iostream>
#include <string>
using namespace std;

class Binary {
        string s;
        public:
            void read(void);
            void chk_bin(void);
            void ones(void);
            void display(void);
            
    };

void Binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void Binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Not a binary number"<<endl;
            exit(0);
        }
    }
    
}

void Binary :: ones(void) {
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) == '0'){
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }

    }
}

void Binary :: display(void) {
   for (int i = 0; i < s.length(); i++){
    cout<<s.at(i);
   }
}

int main() {
    // OOPs - Classes and Objects

    // class Employee {

    // }harry, rohan, lovish;

    // Nesting of Member Functions

    Binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();
    return 0;
}