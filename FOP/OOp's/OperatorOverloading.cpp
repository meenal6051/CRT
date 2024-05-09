#include<iostream>
using namespace std;

class Test{
    private:
    int num;
    public:
    Test() : num(8){}            // Constructor declare.... num's value is initializing
                                 // Test() {num = 8;}
    void operator ++(){          // return type operator ++()
        num = num+2;
    }
    void print(){
        cout<<"The Count is: "<<num<<endl;
    }
};
int main(){
    Test tt;
    ++tt;            // Calling of a function "void operator ++()"
    tt.print();
    return 0;
}