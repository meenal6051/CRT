#include<iostream>
using namespace std;

int SumOddIntegers(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            sum = sum + arr[i];
        }
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = SumOddIntegers(arr, n);
    cout << ans << endl;
    return 0;
}