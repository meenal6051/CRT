#include<iostream>
using namespace std;

class Student
{
    int x; // instance variable or object variable
    static int count; //class variable
    public:
    void show(){
        cout<<x<<endl<<count;
    }
};

int Student::count = 20;

int main()
{
    Student o1,o2;
    o1.show();
    cout<<endl;
    o2.show();

    return 0;
}