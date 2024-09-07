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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        vector<pair<int, int>> p1 = {{a1, a2}, {a1, a2}, {a2, a1}, {a2, a1}};
        vector<pair<int, int>> p2 = {{b1, b2}, {b2, b1}, {b1, b2}, {b2, b1}};
        int ans = 0;
        for (int i = 0; i < 4; ++i) {
            int a = 0, b = 0;
            if (p1[i].first > p2[i].first){
                a++;
            }
            else if (p1[i].first < p2[i].first) {
                b++;
            }
            if (p1[i].second > p2[i].second) {
                a++;
            }
            else if (p1[i].second < p2[i].second) {
                b++;
            }
            if (a > b) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
