#include<iostream>
using namespace std;

int FindNumberOfSuperiorElement(int *arr, int n){
    int sup = 0;
    int count = 0;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] > sup){
            count++;
            sup = arr[i];
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = FindNumberOfSuperiorElement(arr, n);
    cout << result << endl;
    return 0;
}