#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

bool comp(const pair<int, char> &p1, const pair<int, char> &p2) {
    return p1.first > p2.first;
}

int main() {
    opt();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char d : s) {
            mp[d]++;
        }
        vector<pair<int, char>> vp;
        for (auto d : mp) {
            vp.push_back({d.second, d.first});
        }
        sort(vp.begin(), vp.end(), comp);
        string res;
        while (!vp.empty()) {
            vector<pair<int, char>> vp1;
            for (auto &d : vp) {
                if (d.first > 0) {
                    res += d.second;
                    d.first--;
                    if (d.first > 0) {
                        vp1.push_back(d);
                    }
                }
            }
            vp = vp1;
        }
        cout << res << endl;
    }

    return 0;
}
