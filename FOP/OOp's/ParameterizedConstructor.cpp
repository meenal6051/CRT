#include<iostream>
using namespace std;

class Test{
    public:
    Test(int x, int y)  // constructor declaration and the name is same as the class name (also Parameterized constructor)
    {         
        cout<<x+y<<endl;
    }
    void show(){                   // member func decalaration
        cout<<"hello";
    }
};

int main(){
    Test t(10,20);
    t.show();
    return 0;
}