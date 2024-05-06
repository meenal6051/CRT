// define 3 memberFunc (insert display logic) using class and object to find out average of the values.

#include<iostream>
using namespace std;

class Average{
    int firstno,secondno,thirdno;
    int avg;
    public:
    void insert(int a, int b, int c){
        firstno = a;
        secondno = b;
        thirdno = c;
    }
    void logic(){
        avg = (firstno + secondno + thirdno)/3;
    }
    void display(){
        cout<<"Average: "<<avg<<endl;
    }
};

int main(){
    int a,b,c;
    cout<<"Enter Three Values: "<<endl;
    cin>>a>>b>>c;
    Average avg;
    avg.insert(a,b,c);
    avg.logic();
    avg.display();
}