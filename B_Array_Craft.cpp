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
        int n, x, y;
        cin >> n >> x >> y;
        int a[n + 1];
        for (int i = 1; i <= n; ++i) {
            a[i] = 0; 
        }
        for (int i = y; i <= x; ++i) {
            a[i] = 1;
        }
        bool ok = false;
        for (int i = y - 1; i >= 1; --i) {   
            if (a[i] == 0) {
                if (ok) {
                    a[i] = 1;
                }
                 else {
                    a[i] = -1;
                }
                ok = !ok;
            }
        }
        ok = false;
        for (int i = x + 1; i <= n; ++i) {
            if (a[i] == 0) {
                if (ok) {
                    a[i] = 1;
                } 
                else {
                    a[i] = -1;
                }
                ok = !ok; 
            }
        }
        for (int i = 1; i <= n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
