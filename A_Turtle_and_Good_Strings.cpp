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

        bool ok = false;
        for (int i = 1; i < n; ++i) {
            string t1 = s.substr(0, i);
            string t2 = s.substr(i);

            if (t1[0] != t2.back()) {
                ok = true;
                break;
            }
        }
        if (ok) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
