#include<iostream>
#include<vector>
#include<map>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push back
#define mp make_pair
#define forn(i,n) for (int i = 0; i<(n); i++)

int find_mode(const vi &a, int n)
{
    mii frequencyMap;
    for(int num :a){
        frequencyMap[num]++;
    }

    int mode = a[0];
    int max_count = 0;

    for (const auto &elem : frequencyMap){
        if(elem.second > max_count){
            max_count = elem.second;
            mode = elem.first;
        }
    }
    return mode;
}
void print_array(const vi &a)
{
    forn(i, a.size())
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve()
{
    int n;
    cin>>n;
    vi a(n);
    forn(i,n)
    {
        cin>>a[i];
    }
    cout<<"Array Elements:";
    print_array(a);

    int mode = find_mode(a, n);
    cout<<"The mode of the array is: "<< mode << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}