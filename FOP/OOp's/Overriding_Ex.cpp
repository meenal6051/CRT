#include<iostream>
using namespace std;

class fruit{
    public:
    void FruitColour(){
        cout<<"Color :"<<endl;
    }
};
class Apple : public fruit{
    public:
    void FruitColour(){
        cout<<" Red ";
    }
};
class Orange : public fruit{
    public:
    void FruitColour(){
        cout<<" Orange ";
    }
};
class Mango : public fruit{
    public:
    void FruitColour(){
        cout<<" Yellow ";
    }
};
int main(){
    Apple a;
    a.FruitColour();
    Orange o;
    o.FruitColour();
    Mango m;
    m.FruitColour();
    return 0;
}