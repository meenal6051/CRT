#include<iostream>
#include<math.h>
using namespace std;

bool PrimeNumber(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    cout << PrimeNumber(n) << endl;
    return 0;
}