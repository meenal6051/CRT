#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

int cuttingRod(int n){
    vector<int> price={2,4,3,5,2,7,8,9};
    for(int i=0; i<price.size(); i++){
    max(cuttingRod(n-i)+price(i));}
}

void solve()
{
    int n;
    cin >> n;
    cout << cuttingRod(n) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}