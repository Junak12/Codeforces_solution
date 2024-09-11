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
        ll l, r;
        cin >> l >> r;
        ll rng = r - l + 1;
        ll fdd = (l % 2 == 0) ? l + 1 : l;
        ll ldd = (r % 2 == 0) ? r - 1 : r;
        if (fdd > r || ldd < l) {
            cout << 0 << endl;
        } else {
            ll odd_count = (ldd - fdd) / 2 + 1;
            cout << odd_count / 2 << endl;
        }
    }

    return 0;
}
