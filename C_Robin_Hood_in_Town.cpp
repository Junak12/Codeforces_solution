#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

bool ok(ll x, vector<ll>& a, ll sum, ll n) {
    ll s1 = sum + x;
    double avg = (double)s1 / n;
    double hf = avg / 2.0;       
    int cnt = 0;
    for (auto d : a) {
        if (d < hf) {
            cnt++;
        }
    }
    return cnt > n / 2;
}

int main() {
    opt();
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (n <= 2) {
            cout << -1 << endl;
            continue;
        }
        ll l = 0, r = 1e12;
        ll res = -1;
        while (l <= r) {
            ll mid = (l + r) / 2;
            
            if (ok(mid, a, sum, n)) {
                res = mid; 
                r = mid - 1;
            } 
            else {
                l = mid + 1;
            }
        }
        cout << res << endl; 
    }
    
    return 0;
}
