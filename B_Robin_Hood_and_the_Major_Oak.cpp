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
        ll n, k;
        cin >> n >> k;
        if (k >= n) {
            ll tot = n * (n + 1) / 2;
            if (tot % 2 == 0) {
                cout << "YES" << endl;
            } 
            else {
                cout << "NO" << endl;
            }
        } 
        else {
            ll tot = k * n - k * (k - 1) / 2;
            if (tot % 2 == 0) {
                cout << "YES" << endl;
            } 
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
