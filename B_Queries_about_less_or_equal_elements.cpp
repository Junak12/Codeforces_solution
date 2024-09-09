#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main(){
    opt();
    int t;
    //cin >> t;
    t = 1;

    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
       // sort(b.begin(), b.end());
        ll ans = 0;
        vector<ll> res;
        for (int i = 0; i < m; ++i) {
            ll cnt = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            res.push_back(cnt);
        }
        for (auto d : res) {
            cout << d << " ";
        }
        cout << endl;
    }
    return 0;
}