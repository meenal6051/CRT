#include<iostream>
using namespace std;

class Rect{
    protected:
    int b,h;
    public:
    
    void insert(int b, int h){
        this->b=b;
        this->h=h;
    }
};
class Area : public Rect{
    public:
    float areaofrect;
    void logic(){
        float a = 0.5;
        areaofrect = a * b * h;
    }
};

class Result : public Area{
    public:
    void display(){
        cout<<"Area of Rectangle: "<<areaofrect<<endl;
    }
};

int main(){
    int b, h;
    cin>> b >> h;

    Result r;
    r.insert(b, h);
    r.logic();
    r.display();
    return 0;
}
