#include<iostream>
using namespace std;

#define forn(i,n) for(int i=0; i<n; i++)

void input_arr(int arr[], int n){
    int i;
    forn(i,n){
        cin>>arr[i];
    }
}

void print(int arr[], int n){
    int i;
    forn(i,n){
        cout<<arr[i];
    }
}

void solve(int arr[], int n){
    int n,k;
    cin>>n>>k;
    int a[n];
    forn(i,n){
        cin>>a[i];
    }
    reverse(a, a+n);
    reverse(a, a + (n - k));
    reverse(a + (n - k), a+n);
    forn(i,n){
        cout<<a[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    input_arr(arr, size);
    solve(arr,size);
    print(arr, size);

}