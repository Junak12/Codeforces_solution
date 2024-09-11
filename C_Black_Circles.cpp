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
        int n;
        cin >> n;
        vector<pair<ll, ll>> vp(n); 
        for (int i = 0; i < n; ++i) {
            cin >> vp[i].first >> vp[i].second;
        }
        ll xs, ys, xt, yt;
        cin >> xs >> ys >> xt >> yt;
        ll dis = (xt - xs) * (xt - xs) + (yt - ys) * (yt - ys);
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            ll cx = vp[i].first;
            ll cy = vp[i].second;
            ll dt = (cx - xt) * (cx - xt) + (cy - yt) * (cy - yt);
            if (dt <= dis) {
                ok = false;
                break;
            }
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
