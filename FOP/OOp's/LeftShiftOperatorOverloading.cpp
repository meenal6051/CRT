#include<iostream>
#include<cmath>
using namespace std;

class Test{
    private:
    int num;
    public:
    Test() : num(2){}           
    void operator <<(int n){          
        num = num*pow(3,n);
    }
    void print(){
        cout<<"The Count is: "<<num<<endl;
    }
};
int main(){
    Test tt;
    tt<<2;         
    tt.print();
    return 0;
}

// 2 << 2
// 2*3 = 6
// 6*3 = 18