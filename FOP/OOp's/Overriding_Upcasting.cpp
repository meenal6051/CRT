#include<iostream>
using namespace std;

class A{
    public:
    void MyName(){
        cout<<"My Name is ";
    }
};
class B : public A{
    public:
    void MyName(){
        cout<<"Hello, My Name is Meenal";
    }
};
int main(){
    A *a;
    B b;
    a = &b;                // Upcasting
    a->MyName();           // Calling of function in upcasting (child to parent.... parent class member function calling)
    return 0;
}