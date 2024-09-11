#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main(){
    opt();
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        
        for (ll i = 0; i < n; ++i){
            cin >> a[i];
        }
        ll ans = -1;
        for(int i = 0; i< n; ++i){
            if(((i&1)==0) && ans<a[i]){
                ans = a[i];
            }
        }
        
        if(n==1) cout<< a[0] << endl;
        else cout << ans << endl;
    }
    return 0;
}