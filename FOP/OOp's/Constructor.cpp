// construction is a special type of function

// Three Rules to define the constructor:
//  1. Class name and constructor name will be same
//  2. Constructor has no return type
//  3. It is a self initializer.

#include<iostream>
using namespace std;

class Test{
    public:
    Test()  // constructor declaration and the name is same as the class name (also Non-Parameterized constructor)
    {         
        cout<<"Hello"<<' ';
    }
    void show(){                   // member func decalaration
        cout<<"World";
    }
};

int main(){
    Test t();         // constructor calling
    t.show();         // mamber func calling
}


// Constructor is of two types:
// 1. Non parameterized Constructor
// 2. Parameterized Constructor