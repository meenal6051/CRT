#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

void fibonacci(int n){
    vector<int> dp(n+1, -1);
    dp[0] = 1, dp[1] = 1;
    for(int i=0; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
}

void solve()
{
    fibonacci(5);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   
    auto start = high_resolution_clock::now();
    forn(i,10000){
        solve();
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << duration.count()/10000 << " nanoseconds\n";
}