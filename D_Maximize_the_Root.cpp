#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

const ll mx = 2*1e5+123;
vector<ll>adj[mx];
vector<ll>v(mx);

ll dfs(int u) {
    ll mn = 1e18;
    for (auto  d: adj[u]) {
        mn = min (mn, dfs(d));
    }
    if (u == 0) {
        return mn + v[0];
    }
    if(mn == 1e18) {
        return  v[u];
    }
    if (v[u] >= mn) {
        return mn;
    }
    else {
        return (mn + v[u])/2;
    }

}


int main(){
    opt();
    int t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;
        for (ll i = 0; i < n; ++i) {
            cin >> v[i];
            adj[i].clear();
        }
        for (ll i = 1; i < n; ++i) {
            int u;
            cin >> u;
            --u;
            adj[u].push_back(i);
        }
        cout << dfs(0) << endl;
    }
    return 0;
}