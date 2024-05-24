#include<iostream>
#include<algorithm>
using namespace std;

#define forn(i,n) for(i=0; i<n; i++)

void input_arr(int arr[], int n){
    int i;
    forn(i,n){
        cin>>arr[i];
    }
}

void print(int arr[], int n){
    int i;
    forn(i,n){
        cout<<arr[i]<<" ";
    }
}

int solve(int arr[], int n){
    sort(arr, arr+n);
    int t = arr[0];
    for(int i = 0; i< n-1; i++){
        arr[i] = arr[i+1];
    }
   arr[n-1] = t;
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    input_arr(arr, size);
    solve(arr,size);
    print(arr, size);
}