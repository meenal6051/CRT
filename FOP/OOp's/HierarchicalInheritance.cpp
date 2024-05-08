#include<iostream>
using namespace std;

class A{
    protected:
    int a,b;
    int sum;
    float average;
    public:
    void insert(int a, int b){
        this->a=a;
        this->b=b;
    }
};
class B : public A{
    // protected:
    // int sum;
    public:
    void SUM(){
        sum = a+b;
        cout<<"Sum of "<< a<< " and "<< b << " is "<<sum<<endl;
    }
};
class C : public A{
    // protected:
    // float average;
    public:
    void AVERAGE(){
        average = (float)(a+b)/2;
        cout<<"Average of "<< a << " and "<< b << " is "<<average; 
    }
};

int main(){
    int a,b;
    cin>> a >> b;
    
    B bObj;
    bObj.insert(a,b);
    bObj.SUM();

    C cObj;
    cObj.insert(a,b);
    cObj.AVERAGE();
    return 0;
}