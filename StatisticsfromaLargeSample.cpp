// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

vi input_vector(){
    int n;
    cin >> n;
    vi v(n);
    forn(1,n){
        cinn>>v[i];
    }
    return v[i];
}

void print_vec(vi &v){
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
}
int count_distinct_elements(vi v){
    mii m;
    forn(1, v.size()){
        m[v[i]]++;
    }
    return m.size();
}
void solve()
{
    // the code goes here
    // cout << "Hi\n";
    vi v = input_vector;
    count_distinct_elements(v);
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