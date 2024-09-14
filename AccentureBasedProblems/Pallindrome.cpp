#include<iostream>
using namespace std;

int pallindromeCheck(int x){
    int rev = 0;
    while(x > 0){
        int temp = x % 10;
        rev = rev*10 + temp;
        x = x/10;
    }
    return rev;
}

int main(){
    int x;
    cin >> x;
    int result = pallindromeCheck(x);
    if(result == x){
        cout <<  "true";
    }else{
        cout << "false";
    }
    return 0;
}