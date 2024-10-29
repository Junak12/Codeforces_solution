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
        int n;
        cin >> n;
        ll mx_a = 0, mx_b = 0;
        for (int i = 0; i < n; ++i) {
            ll a, b;
            cin >> a >> b;
            mx_a = max(mx_a, a);
            mx_b = max(mx_b, b);
        }
        cout << 2 * (mx_a + mx_b) << endl;
    }
}