#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

// void print_vector(vi v){

// }

bool isEven_bits(int n){
    return  ~(n & 1);
}

bool isPowerOf2(int n){
    return !(n & (n-1));
}

// int least_significant_bit(int n){
//     return n & ~(n-1);
// }

int count_bits(int n){
    int count = 0;
    while(n){
        n >>= 1;
        count++;
    }
    return count;
}
 
int count_set_bits(int n){
    int count = 0;
    while(n){
        if(n & 1){
            count++;
        }
        n >>= 1;
    }
    return count;
}

int Find_NonRepeating(int a){
    int result = 0;
    for(int x : v){
        result =^ x;
    }
    return result;
}

void solve()
{
    // the code goes here
    int n ;
    cin >> n;

    // cout << isEven_bits(n) << "\n";
    // cout << isPowerOf2(n) << "\n";
    // cout << count_bits(n) << "\n";
    // cout << count_set_bits(n) << "\n";
    // cout << least_significant_bit(n) << "\n";
    cout << Find_NonRepeating(n) << "\n";
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