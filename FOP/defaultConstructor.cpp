#include<iostream>
using namespace std;

class abc
{
    int num;
    public:
    abc()
    {
        num = 0;
        cout<<"Default Constructor"<<endl;
        cout<<"num: "<<num<<endl;
    }
    abc(int n)
    {
        cout<<"Parameterized Constructor"<<endl;
        num = n;
        cout<<"n: "<<n;
    }
};

int main()
{
    abc ob1;
    abc ob2(50);
    return 0;
}
