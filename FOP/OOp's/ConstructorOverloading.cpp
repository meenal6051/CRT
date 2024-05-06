// constructor name will be same and parameter will be a different in Constructor Overloading.

#include<iostream>
using namespace std;

class Test{
    public:
    Test(){
        cout<<"Hello"<<endl;
    }
    Test(int x){
        cout<<x<<endl;    
    }
    Test(char x){
        cout<<x<<endl;    
    }
};

int main(){
    Test t;
    Test t1(45);
    Test t2('M');
}