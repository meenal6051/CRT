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
        cout<<arr[i];
    }
}

float median(int *arr, int n){
    sort(arr, arr+n);
    if(n % 2 == 0){
        return (arr[(n/2) - 1] + arr[(n/2)] /2.0);
    }
    else{
        return arr[n/2];
    }
}

void solve(){
    int n;
    cin>>n;
    int a[n];
    input_arr(a,n);
    cout<<median(a,n)<<"\n";
    print(a,n);
}

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();
}