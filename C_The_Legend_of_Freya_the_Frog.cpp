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
        ll x, y, k;
        cin >> x >> y >> k;
        
        ll j_x = (x + k - 1) / k;
        ll j_y = (y + k - 1) / k;
        ll moves = 2 * max(j_x, j_y) ;
        if (j_x > j_y) {
            moves--;
        }
        
        cout << moves << endl;
    }
    
    return 0;
}