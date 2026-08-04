#include <iostream>
#include <cstring>
using namespace std;


class  CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display()=0;
};

class CWHVideo : public CWH{
    int videoLength;
    public:
        CWHVideo(string s, float r, int vL) : CWH(s, r){
            videoLength = vL;
        }
        void display(){
            cout<<"This is an amazing video with title: "<<title<<endl;
            cout<<"This video has rating: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes long"<<endl;
        }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int wC) : CWH(s, r){
            words = wC;
        }
        void display(){
            cout<<"This is an amazing text video with title: "<<title<<endl;
            cout<<"This text video has rating: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Word length of this video is: "<<words<<" minutes long"<<endl;
        }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    //Video
    title = "Python tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo pyVideo(title, rating, vlen);
    pyVideo.display();

    //Text
    title = "Python text tutorial";
    words = 533;
    rating = 3.21;
    CWHText pyText(title, rating, words);
    pyText.display();

    CWH* tuts[2];
    tuts[0] = &pyVideo;
    tuts[1] = &pyText;

    tuts[0] -> display();
    tuts[1] -> display();

    return 0;
}