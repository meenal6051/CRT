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