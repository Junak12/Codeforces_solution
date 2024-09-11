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
        int xc, yc, k;
        cin >> xc >> yc >> k;
        vector<pair<int,int>>vp;
        if ( k % 2 == 1) {
            vp.push_back({xc, yc});
        }
        for (int i = 1; i <= k/2; ++i) {
            vp.push_back({xc - i, yc - i});
        }
        for (int i = 1; i <= k/2; ++i) {
            vp.push_back({xc + i, yc + i});
        }
        for (auto d : vp) {
            cout << d.first << " " << d.second << endl;
        }
    }
    return 0;
}
