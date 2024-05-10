#include<iostream>
using namespace std;

class Test{
    public:
    virtual void show() = 0;
    virtual void disp() = 0;
};
class Base : public Test{
    public:
    void show(){
        cout<<"Function defined";
    }
    void disp(){}
};
int main(){
    Base b;
    b.show();
    b.disp();
    return 0;
}