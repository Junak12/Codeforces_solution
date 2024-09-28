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

        int res = 0;
        for (int i = 0; i < n; i++) {
            int cur = a[i]; 
            int cnt = 1; 
            for (int j = i + 2; j < n; j += 2) {
                cur = max(cur, a[j]);
                cnt++;
            }
            res = max(res, cur + cnt);
        }
        cout << res << endl;
    }

    return 0;
}
