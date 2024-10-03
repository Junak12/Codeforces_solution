#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

const int mx = 1e5 + 123;
vector<int> adj[mx];
vector<ll> p(mx, 0) , h(mx, 0), b(mx, 0),g(mx, 0);
vector<ll> subtree(mx, 0);
bool ok = true;

void dfs(int u, int par) {
    ll bad = 0;
    subtree[u] = p[u];
    for (auto d : adj[u]) {
        if (d == par) continue;
        dfs(d, u);
        subtree[u] += subtree[d];
        bad += b[d];
    }
    if (h[u] > subtree[u]) ok = false;
    if (h[u] < (-subtree[u])) ok = false;
    if ((subtree[u] + h[u]) % 2) ok = false;
    g[u] = (subtree[u] + h[u]) / 2;
    b[u] = (subtree[u] - h[u]) / 2;
    if (b[u] > p[u] + bad) {
        ok = false;
    }
}

int main(){
    opt();
    int t;
    cin >> t;

    while (t--){
        ok = true;
        ll n , m;
        cin >> n >> m;
        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
        }
        for (int i = 1; i <= n; ++i) {
            cin >> h[i];
        }
        for (int i = 1; i <= n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            //--u, --v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, 0);
        if (ok) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
            p[i] = 0, h[i] = 0, b[i] = 0, g[i] = 0;
            subtree[i] = 0;
        }
        ok = true;
    }
    return 0;
}