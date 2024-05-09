#include<iostream>
using namespace std;

class A
{
    public:
    void show(int x){
        cout<<x<<endl;
    }
    void show(char a){
        cout<<a<<endl;
    }
};


int main(){
    A obj;
    obj.show(1);
    obj.show('a');
    return 0;
}
