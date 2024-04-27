#include<iostream>
using namespace std;

int gcd(int x, int y){
    //Base case: if either number is 0, return the other number as the GCD
    if(x == 0)
    return y;
    if(y == 0)
    return x;
    
    // Recursively find the GCD by calling the function with 
    return gcd(y, x % y);
}

int main(){
    int n1,n2;
    cout<<"Input the First number: ";
    cin>>n1;
    cout<<"Input the Second number: ";
    cin>>n2;

    // Calculate the GCD using Recursion
    int result = gcd(n1,n2);
    cout<<"The GCD of "<<n1<<" and "<<n2<<" is: "<<result;
    return 0;
}