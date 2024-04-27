// Recursive function to calculate the factorial of a number.
#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    int num;
    cout<<"Input a number: ";
    cin>>num;
    int fact = factorial(num);
    cout<<"Factorial of "<<num<<" is: "<< fact;
    return 0;
}