#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main() {
    opt();
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        
        multiset<ll> mt;
        ll mx = LLONG_MIN;
        for (int i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            mt.insert(x);
            mx = max(mx, x);
        }
        vector<ll> ans;
        while (q--) {
            char c;
            ll l, r;
            cin >> c >> l >> r;
            if (l <= mx && mx <= r) {
                if (c == '-') {
                    mx--;
                }
                else {
                    mx++;
                }
            }
            /*vector<ll> v;
            for (auto it = mt.lower_bound(l); it != mt.end() && *it <= r; ) {
                v.push_back(*it);
                it = mt.erase(it);
            }
            for (ll value : v) {
                if (c == '+') {
                    mt.insert(value + 1);
                } else {
                    mt.insert(value - 1);
                }
            }
            if (!mt.empty()) {
                mx = *mt.rbegin();
            } else {
                mx = LLONG_MIN; 
            }*/
            ans.push_back(mx);
        }
        for (auto d : ans) {
            cout << d << " ";
        }
        cout << endl;
        ans.clear();
    }

    return 0;
}
