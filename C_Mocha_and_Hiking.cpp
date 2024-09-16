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
        bool ok = false;
        int idx = -1;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 0) {
                ok = true;
                idx = i;
            }
        }
        vector<int> ans;
        if (ok) {
            for (int i = 0; i <= idx; ++i) {
                ans.push_back(i + 1);
            }
            ans.push_back(n + 1);
            for (int i = idx + 1; i < n; ++i) {
                ans.push_back(i + 1);
            }
        } 
        else {
            
            ans.push_back(n + 1);
            for (int i = 0; i < n; ++i) {
                ans.push_back(i + 1);
            }
        }
        for (auto d : ans) {
            cout << d << " ";
        }
        cout << endl;
    }
}
