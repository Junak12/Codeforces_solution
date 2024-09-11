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
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        int mn = max (l, L);
        int mx = min (r, R);
        if (mn > mx) {
            cout << "1" << endl;
            continue;
        }
        int ans = mx - mn;
        if(min (l, L) < mn) {
            ans++;
        } 
        if(max (r, R) > mx) {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}