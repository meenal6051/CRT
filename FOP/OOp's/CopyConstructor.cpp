// Copy Constructor
// We can Copy value from one object to another object
// We have two objects (B1 and B2) under B1 we have 2 variables like a=90 & b=78;
// So B2 = B1   by using this B1 object value copy to B2.

#include<iostream>
using namespace std;

class A{
    public:
    int x;
    A(int a){                            // Parameterized Constructor
        x=a;
    }
    A(A &i){                            // Copy Constructor
        x = i.x;
    }
};
int main(){
    A a1(20);                           // Calling the Parameterized Constructor
    A a2(a1);                           // Calling the Copy Constructor
    cout<<a2.x;
    return 0;
}