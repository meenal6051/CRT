#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef map<int, vector<int>> mivi;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

vvi adj_list_matrix(int n, vvi edges) {
    vvi adj_matrix(n, vi(n, 0));
    for (vi edge : edges) {
        adj_matrix[edge[0]][edge[1]] = 1;
        adj_matrix[edge[1]][edge[0]] = 1;
    }
    return adj_matrix; 
}

mivi make_adj_list(int n, vvi edges) {
    mivi adj_list;
    for (vi edge : edges) {
        if(edge[0] != edge[1]){
            adj_list[edge[0]].pb(edge[1]);
        }
        adj_list[edge[1]].pb(edge[0]);
    }
    return adj_list;
}

void graph() {
    int n = 7;
    vvi edges{{0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}};

    // Create adjacency matrix
    vvi adj_matrix = adj_list_matrix(n, edges);
    cout << "Adjacency Matrix:\n";
    for (vi row : adj_matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }

    // Create adjacency list
    mivi adj_list = make_adj_list(n, edges);
    cout << "\nAdjacency List:\n";
    for (auto pair : adj_list) {
        cout << pair.first << ": ";
        for (int val : pair.second) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    graph();
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// // using namespace std::chrono;

// typedef vector<int> vi;
// typedef vector<vector<int>> vvi;
// typedef vector<string> vs;
// typedef map<int, vector<int>> mivi;

// #define pb push_back
// #define mp make_pair
// #define forn(i, n) for (int i = 0; i < n; i++)

// vvi adj_list_matrix(int n, vvi edges){
//     vvi adj_matrix(n, vi(n,0));
//     for(vi edge : edges){
//         adj_matrix[edge[0]][edge[1]] = 1;
//         adj_matrix[edge[1]][edge[0]] = 1;
//     }
//     return adj_list_matrix;
// }




// void graph(){
//     int n=7;
//     vvi edges{{0,1}, {0,2}, {0,3}, {1,4}, {1,5}, {2,5}, {3,4}, {6,6}};

//     mivi adj_list = make_adj_list(n, edges);
//     cout<<"\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     graph();
//     // auto start = high_resolution_clock::now();
//     // auto stop = high_resolution_clock::now();
//     // auto duration = duration_cast<nanoseconds>(stop - start);
//     // cout << duration.count() << "\n";
// }