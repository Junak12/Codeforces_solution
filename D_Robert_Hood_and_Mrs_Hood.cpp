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
    cin >> t;

    while (t--){
        ll n ,d, k;
        cin >> n >> d >> k;
        vector<ll> start(n + 1, 0), ennd(n + 1, 0);
        while (k--) {
            ll l, r;
            cin >> l >> r;
            start[l]++;
            ennd[r]++;
        }
        for (int i = 1; i <= n; ++i) {
            start[i] = start[i] + start[i - 1];
            ennd[i] = ennd[i] + ennd[i - 1];
        }
        /*for (int i = 0; i < n; ++i) {
            //cout << ennd[i] << " ";
            cout << start[i] << " ";
        }*/
        int mx = 0, mn = 1e12;
        int br = -1, mm = -1;
        for (int i = d; i <= n; ++i) {
            int overlap = start[i] - ennd[i - d];
            if (overlap > mx) {
                mx = overlap;
                br = i - d + 1;
            }
            if (overlap < mn) {
                mn = overlap;
                mm = i - d + 1;
            }
        }
        cout << br << " " << mm << endl;
    }
    return 0;
}