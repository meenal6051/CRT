#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

int a[1001];

int fibonacci(int n){
    if(n < 2){
        return n;
    }
    if(!a[n]){
        return a[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return a[n];
}

void solve()
{
    // the code goes here
    int n;
    cin>>n;
    cout << fibonacci(n) << "\n" ;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);
    // cout << duration.count() << "\n";
}