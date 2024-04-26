// A Program of Static Member Function

#include<iostream>
using namespace std;

class abc
{
    int x;
    static int count;
    public:
    static void show1(){
        cout<<count<<endl;
    }
    void show2(){
        cout<<x<<endl<<count<<endl;
    }
};

int abc::count = 10;

int main()
{
    abc ob1;
    abc::show1();
    ob1.show2();

    return 0;
}
