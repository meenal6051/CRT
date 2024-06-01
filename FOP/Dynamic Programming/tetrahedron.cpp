#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

unsigned long long int tetrahedron_dp(int n){
    unsigned long long int dp[2][n + 1];
    dp[0][0] = 0;
    dp[1][0] = 1;
    
    for(int i = 1; i <= n; i++){
        dp[1][i] = 3*dp[0][i-1];
        dp[0][i] = 2*dp[0][i-1] + dp[1][i-1];
    }
    return dp[1][n];
}

void solve()
{
    int n;
    cin >> n;
    cout << tetrahedron_dp(n) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}