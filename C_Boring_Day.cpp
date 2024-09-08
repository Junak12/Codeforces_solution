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

    while(t--){
        ll n,l,r;
        cin >> n >> l >> r;
        vector< ll > v(n);
        for (int i=0; i<n; ++i){
            cin >> v[i];
        }
        ll j=0, sum=0, ans=0;
        for (int i=0; i<n; ++i){
            sum+=v[i];
            if (sum < l){
                continue;
            }
            if (sum <= r){
                ans++;
                sum = 0;
                j = i + 1;
                continue;
            }
            while (j <= i  && sum > r){
                sum-=v[j];
                j++;
            }
            if (sum >= l){
                ans++;
                sum = 0;
                j = i + 1;
                //continue;
            }
        }
        cout << ans << endl;
    }
    return 0;
}