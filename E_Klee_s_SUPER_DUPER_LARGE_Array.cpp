#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

ll sum(int i, ll k) {
    return i * (2 * k + i - 1) / 2;
}

int main() {
    opt();
    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll tot = n * (2 * k + n - 1) / 2;
        ll l = 1;
        ll r = n;
        ll res = LLONG_MAX;

        while (l <= r) {
            ll mid = l + (r - l) / 2;
            ll sum_left = sum(mid, k);
            ll ans = abs(2 * sum_left - tot);
            res = min(res, ans);
            if (2 * sum_left < tot) {
                l = mid + 1;
            } 
            else {
                r = mid - 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
