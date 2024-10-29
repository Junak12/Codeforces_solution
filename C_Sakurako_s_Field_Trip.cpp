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
        vector<int> a(n + 2, 0); 
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        for (int l = 1, r = n; l < r; l++, r--) {
            if (a[l] == a[l - 1] || a[r] == a[r + 1]) {
                swap(a[l], a[r]);
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) { 
            if (a[i] == a[i + 1]) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
