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
        int n;
        cin >> n;
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> b[i];
        }
        vector<int> a(n);
        a[0] = b[0];
        bool ok = true;
        for (int i = 1; i < n - 1; ++i) {
            a[i] = b[i - 1] | b[i];
            if ((a[i - 1] & a[i]) != b[i - 1]) {
                ok = false;
                break;
            }
        }
        a[n - 1] = b[n - 2];
        if ((a[n - 2] & a[n - 1]) != b[n - 2]) {
            ok = false;
        }
        if (ok) {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
