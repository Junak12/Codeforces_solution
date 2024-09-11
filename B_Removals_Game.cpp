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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        if (a == b) {
            cout << "Bob" << endl;
        }
        else {
            reverse(a.begin(), a.end());
            if (a == b) {
                cout << "Bob" << endl;
            } 
            else {
                cout << "Alice" << endl;
            }
        }
    }

    return 0;
}
