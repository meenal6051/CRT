#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef map<int, vi> mivi;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

void print_vi(vi v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void print_vvi(vvi v)
{
    for (vi x : v)
    {
        print_vi(x);
    }
}

void print_mivi(mivi m)
{
    for (auto key_list_pair : m)
    {
        cout << key_list_pair.first << "-> ";
        print_vi(key_list_pair.second);
    }
}

vvi make_adj_matrix(int n, vvi edges)
{
    vvi adj_matrix(n, vi(n, 0));
    for (vi edge : edges)
    {
        adj_matrix[edge[0]][edge[1]] = 1;
        adj_matrix[edge[1]][edge[0]] = 1;
    }
    return adj_matrix;
}

mivi make_adj_list(int n, vvi edges)
{
    mivi adj_list;
    for (vi edge : edges)
    {
        if (edge[0] != edge[1])
        {
            adj_list[edge[0]].pb(edge[1]);
        }
        adj_list[edge[1]].pb(edge[0]);
    }
    return adj_list;
}

void graphs()
{
    int n = 7;
    vvi edges{{0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}};
    vvi adj_matrix = make_adj_matrix(n, edges);
    print_vvi(adj_matrix);
    mivi adj_list = make_adj_list(n, edges);
    print_mivi(adj_list);
}

int main()
{
    graphs();
}