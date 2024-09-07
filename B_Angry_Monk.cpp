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
        vector<int> v(3);
        for (int i = 0; i < 3; ++i) {
            cin >> v[i];
        }
        int mx = *max_element(v.begin(), v.end());
        int mn = *min_element(v.begin(), v.end());
        int ans ;
        for (auto d : v) {
            if (d != mx && d != mn) {
                ans = d;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}