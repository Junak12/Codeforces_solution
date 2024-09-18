#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

const int mx = 2e5 + 123;
vector<int> adj[mx];
vector<int> col(mx, -1);
vector<pair<int, int>> vp;

bool bfs(int start) {
    queue<int> q;
    col[start] = 0;
    q.push(start);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto d : adj[u]) {
            if (col[d] == -1) {
                col[d] = 1 - col[u];
                q.push(d);
            } 
            else if (col[d] == col[u]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    opt();
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        vp.push_back({u, v});
    }
    bool ok = true;
    for (int i = 1; i <= n; ++i) {
        if (col[i] == -1) {
            if (!bfs(i)) {
                ok = false;
                break;
            }
        }
    }
    /*for (int i = 1; i <= n; ++i) {
        cout << col[i] << endl;
    }*/
    if (ok) {
        cout << "YES" << endl;
        string res = "";
        for (auto d : vp) {
            int u = d.first;
            int v = d.second;
            if (col[u] < col[v]) {
                res += '0';
            } 
            else {
                res += '1';
            }
        }
        cout << res << endl;
    } 
    else {
        cout << "NO" << endl;
    }
    return 0;
}
