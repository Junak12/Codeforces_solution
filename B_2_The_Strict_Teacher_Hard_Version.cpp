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
        ll n, m, q;
        cin >> n >> m >> q;
        vector<ll> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        while (q--) {
            ll x;
            cin >> x;
            if (x < a[0]) {
                cout << a[0] - x << endl;
            } 
            else if (x > a[m - 1]) {
                cout << x - a[m - 1] << endl;
            }
            else {
                auto it1 = upper_bound(a.begin(), a.end(), x);
                auto it2 = it1;
                if (it1 != a.begin()) {
                    it2 = it1 - 1;
                }
                ll d1 = LLONG_MAX, d2 = LLONG_MAX;
                if (it1 != a.end()) {
                    d1 = abs(x - *it1);
                }
                if (it2 != a.end()) {
                    d2 = abs(x - *it2);
                }
                cout << min(d1, d2) << endl;
            }
        }
    }
    return 0;
}