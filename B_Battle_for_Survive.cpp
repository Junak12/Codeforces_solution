#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main() {
    opt();
    ll t; 
    cin >> t;
    while (t--) {
        ll n; 
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }
        ll mx = a[n - 1];
        ll secnd = a[n - 2];
        for (ll i = 0; i < n - 2; ++i) {
            secnd -= a[i];
        }
        cout << mx - secnd << endl;
    }
    return 0;
}
