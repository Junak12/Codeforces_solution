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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        ll ans = 0;
        ll res = 0;
        ll i = 0, j = 0;
        while (j < n) {
            res += a[j];
            while (res > m || (a[i] - a[j] > 1)) {
                res -= a[i];
                i++;
            }
            ans = max(ans, res);
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}
