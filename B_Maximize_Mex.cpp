#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

const int N = 3e5 + 123;

int main() {
    opt();
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<ll> v(n);
        map<ll,ll> cnt;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < n) {
                cnt[v[i]]++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (cnt[i] > 1 && i + x < n) {
                ll exist = cnt[i] - 1; 
                cnt[i] = 1;
                cnt[i + x] += exist;
            }
        }
        ll mex = 0; 
        while (mex < n && cnt[mex] > 0) {
            mex++;
        }

        cout << mex << endl;  
    }
    return 0;
}
