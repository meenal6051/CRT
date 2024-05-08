#include<iostream>
using namespace std;
class A{
    public:
    void func()
    {
        cout<<" I am in class A" << endl;
    }
};
//Base class B
class B{
    public:
    void func() {
        cout<< " I am in class B "<<endl;
    }
};

//DErived class
class C : public A,public B {
};

//Driver code

int main()
{
    //Created an object of class C

    C obj;
    //Calling function of func()
    obj.A::func();
    obj.B::func();

    return 0;
}


//It represents ambiguity error due to multiple functions