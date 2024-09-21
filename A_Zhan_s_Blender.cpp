#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main() {
    opt();
    int t;
    cin >> t; 

    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        ll ans = 0, cnt = 0;
        if( n % min(x, y) == 0) {
            cout << n / min(x, y) << endl;
        }
        else {
            cout << n / min(x, y) + 1 << endl;
        }
    }
    return 0;
}
