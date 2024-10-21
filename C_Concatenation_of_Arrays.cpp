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
        vector<ll> first(n), second(n), val(2 * n);
        for (ll i = 0; i < n; ++i) {
            cin >> first[i] >> second[i];
            val[2 * i] = first[i];
            val[2 * i + 1] = second[i];
        }
        sort(val.begin(), val.end());
        map<ll, ll> mp;
        ll index = 1;
        for (ll val : val) {
            if (mp.find(val) == mp.end()) {
                mp[val] = index++;
            }
        }
        vector<tuple<ll, ll, ll, ll>> ans;
        for (ll i = 0; i < n; ++i) {
            ll f = mp[first[i]];
            ll s = mp[second[i]];
            ans.push_back({min(f, s), max(f, s), first[i], second[i]});
        }

        sort(ans.begin(), ans.end());
        for (auto d : ans) {
            cout << get<2>(d) << " " << get<3>(d) << " ";
        }
        cout << endl;
    }

    return 0;
}
