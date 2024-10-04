#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

const int mx = 2e5 + 123;
vector<int> adj[mx];
vector<int> order;
vector<bool> visited(mx, false); 
int pos[mx];

void sort_adj(int v) {
    sort(adj[v].begin(), adj[v].end(), [&](int a, int b) {
        return pos[a] < pos[b];
    });
}

void bfs(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        order.push_back(v);
        sort_adj(v);
        for (auto d : adj[v]) {
            if(!visited[d]) { 
                visited[d] = true;
                q.push(d); 
            }
        }
    }
}

int main(){
    opt();
    int t;
    //cin >> t;
    t = 1;

    while(t--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }
        order.clear();
        fill(visited.begin(), visited.end(), false);
        for(int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            pos[a[i]] = i; 
        }
        bfs(1);
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] != order[i]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
