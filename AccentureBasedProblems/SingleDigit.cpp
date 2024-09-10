// Problem statement :
// Given a number  N your task is to make N a single digit by performing the following operations:
//  ->If N is  ODD make it floor (N/2).
//  ->If n iş already a single digit print it as it is
//  ->If n is even make it floor((n-2)/2)

// Example:Input :10
// Output: 4
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n > 9){
        if(n % 2 == 0){
            n = (n-2)/2;
            }
        else {
            n = n/2;
            }
    }
    cout << n << endl;
}