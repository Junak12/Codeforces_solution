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
        vector<pair<ll,ll>>vp;
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            vp.push_back({x, y});
        }
        set<ll> st1, st2;
        for (auto d : vp) {
            if (!d.second) {
                st1.insert(d.first);
            }
            else if (d.second == 1) {
                st2.insert(d.first);
            }
        }
        ll cnt = 0;
        for (auto d : st1) {
            if (st2.find(d + 1) != st2.end() && st1.find(d + 2) != st1.end()) { // x, x+1, x+2
                cnt++;
            }
        }

        //cout << cnt << endl;
        for (auto d : st1) {
            if (st2.find(d) != st2.end()) {
                cnt += (st2.size() + st1.size() - 2);
            }
        }

        //cout << cnt << endl;
        for (auto d : st2) {
            if (st1.find(d - 1) != st1.end() && st2.find(d - 2) != st2.end()) { //x, x-1, x-2
                cnt++;
            }
        }
        //cout << cnt << endl;
        cout << cnt << endl;
    }

    return 0;
}