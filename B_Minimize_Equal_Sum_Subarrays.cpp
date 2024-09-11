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
        vector<int> p(n), q(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        for (int i = 0; i < n; ++i) {
            q[i] = p[(i + 1) % n];
        }
        for (int i = 0; i < n; ++i) {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
