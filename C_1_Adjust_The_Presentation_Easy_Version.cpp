#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> a(n);
        vector<int> b;
        for (int i = 0; i < n; i++){
            cin >> a[i]; 
        }
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            if (b.empty() || b.back() != x) {
                b.push_back(x);
            }
        }
        vector<bool> vis(n + 1, false); 
        bool ok = true;
        int idx = 0; 
        for (int i = 0; i < b.size(); i++) {
            while (idx < n && a[idx] == b[i]) {
                vis[a[idx]] = true;
                idx++;
            }
            if (vis[b[i]] == false) { 
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "YA" << endl;
        }
        else {
            cout << "TIDAK" << endl;
        }
    }

    return 0;
}
