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

void print_mivi(mivi m)
{
    for (auto key_list_pair : m)
    {
        cout << key_list_pair.first << "-> ";
        print_vi(key_list_pair.second);
    }
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

vb visited(10, 0);

void dfs_traversal(mivi &adj_list, int v) // v: starting node
{
    visited[v] = 1;
    cout << v << " ";
    for (int neighbor : adj_list[v])
    {
        if (!visited[neighbor])
        {
            dfs_traversal(adj_list, neighbor);
        }
    }
}

void graphs()
{
    int n = 7;
    vvi edges{{0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}};

    mivi adj_list = make_adj_list(n, edges);
    dfs_traversal(adj_list, 1); // 1 is the start node here
    cout << "\n";
}

int main()
{
    graphs();
}