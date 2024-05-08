#include<iostream>
using namespace std;

class Area{
    int r;
    public:
    float areaofcircle;
    void insert(int r){
        this->r=r;
    }
    void logic(){
        float pi = 3.14;
        areaofcircle = pi*r*r;
    }
};
class Circle:public Area{
    public:
    void display(){
        cout<<"Area of Circle: "<<areaofcircle<<endl;
    }
};
int main(){
    int r;
    cin>>r;
    Circle c;
    c.insert(r);
    c.logic();
    c.display();
    return 0;
}