#include<iostream>
using namespace std;
int power(int b, int e){
    if(e == 0){
        return 1;
    }

    return b*power(b,e-1);
}

int main(){
    int b,e;
    cout<<"Input the base number: ";
    cin>>b;
    cout<<"Input the Exponent : ";
    cin>>e;
    int result = power(b,e);
    cout<<b<<" raised to the power of "<<e<<" is: "<<result;
    return 0;
}