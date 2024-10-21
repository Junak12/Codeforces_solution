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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mn = INT_MAX; 
        int mx = 0; 
        ll sum = 0;

        sort(a.rbegin(), a.rend());
        sort(a.begin() + 1, a.end());
        
        for (int i = 0; i < n; i++) {
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
            sum += mx - mn;
        }
        cout << sum << endl;
    }
    
    return 0;
}
