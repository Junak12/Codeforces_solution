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
        string s;
        cin >> n >> s;
        int side = sqrt(n);
        //cout << side << endl;
        if (side * side != n) {
            cout << "No" << endl;
            continue;
        }
        bool ok = true;
        for (int i = 0; i < side; i++) {
            for (int j = 0; j < side; j++) {
                if ((i == 0 || i == side - 1 || j == 0 || j == side - 1)) {
                    if (s[i * side + j] != '1') {
                        ok = false;
                        break;
                    }
                } 
                else {
                    if (s[i * side + j] != '0') {
                        ok = false;
                        break;
                    }
                }
            }
            if (!ok) break;
        }

        if (ok) {
            cout << "Yes" << endl;
        }
         else {
            cout << "No" << endl;
        }
    }

    return 0;
}
