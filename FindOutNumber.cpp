#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int> &arr, int n){
    int expectedSum = n*(n+1)/2;
    int actualSum = 0;
    for(int num : arr){
        actualSum += num;
    }

    return expectedSum - actualSum;
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i =0; i<n-1; i++){
        cin>>arr[i];
    }

    int missNo = findMissingNumber(arr, n);
    cout<<missNo<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}