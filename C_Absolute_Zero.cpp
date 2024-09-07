#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

ll my_abs(ll x) {
    return abs(x);
}

int main() {
    opt();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll op = 0;
        vector<ll> ans;

        while (op <= 40) {
            ll mx = *max_element(a.begin(), a.end());
            ll mn = *min_element(a.begin(), a.end());

            if (mx == 0 && mn == 0) {
                break;
            }

            ll fix = (mx + mn) / 2;
            ans.push_back(fix);

            for (int i = 0; i < a.size(); ++i) {
                a[i] = my_abs(a[i] - fix);
            }

            op++;
        }

        if (op >= 40) {
            cout << "-1" << endl;
        } 
        else {
            cout << op << endl;
            for (ll i = 0; i < op; ++i) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}