#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main() {
    opt();
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; ++i) {
            cin >> vp[i].first >> vp[i].second;
        }
        sort(vp.begin(), vp.end());
        bool ok = false;
        //int pre = 0;
        if (vp[0].first >= s) {
            ok = true;
        }
        for (int i = 0; i < n; ++i) {
            if (i > 0 && vp[i].first - vp[i-1].second >= s) {
                ok = true;
                break;
            }
        }
        if (m - vp[n-1].second >= s) {
            ok = true;
        }
        if (ok) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
