#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main(){
    opt();
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<ll> pref(n, 0);
        pref[0] = a[0];
        for (int i = 1; i < n; ++i) {
            pref[i]= pref[i - 1] + a[i];
        }
        string s;
        cin >> s;
        vector<pair<int,int>> vp;
        int i = 0, j = n - 1;
        while(i < j) {
            while( s[i] != 'L' && i < j) {
                i++;
            }
            while(s[j] != 'R' && i < j) {
                j--;
            }
            if (i < j) {
                vp.push_back({j,i});
                ++i, --j;
            }
        }
        ll sum = 0;
        for (auto d : vp) {
            if (d.second == 0) {
                sum += pref[d.first];
            }
            else {
                sum += (pref[d.first] - pref[d.second - 1]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}