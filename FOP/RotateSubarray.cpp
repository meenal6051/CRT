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

void solve(int &arr, k)(){
    //copy the k elem
    int temp[k];
    forn(i,k){
        temp[k] = arr[i];
    }
    // shift the remaining n-k elements
    for(int i=k; i<n;i++){
        arr[i-k] = arr[i];
    }
    // copy back the k elements
    for(int i=n-k; i<n;i++){
        arr[n-k+1]= temp[i-(n-k)];
    }
}

int main(){
    int size,k;
    cin>>size>>k;
    int arr[size];

    input_arr(arr, size);
    solve(arr,size);
    print(arr, size);
}