#include<iostream>
using namespace std;

class Test{
    public :
    int a = 90;
    void show(){
        cout<<a;
    }
};

int main(){
    Test t;
    t.show();
    return 0;
}