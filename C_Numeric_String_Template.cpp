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
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int m;
        cin >> m;
        while (m--) {
            string s;
            cin >> s;
            map<int,char> mp1;
            map<char,int> mp2;
            if (s.size() > n) {
                cout << "NO" << endl;
                continue;
            }
            if (s.size() < n) {
                cout << "NO" << endl;
                continue;
            }
            bool ok = true;
            for (int i = 0; i < n; ++i) {
                int num = a[i];
                char ch = s[i];
                if(mp1.count(num) == 0 && mp2.count(ch) == 0) {
                    mp1[num] = ch;
                    mp2[ch] = num;
                }
                else if (mp1[num] != ch && mp1.count(num) > 0) {
                    ok = false;
                    break;
                }
                else if (mp2[ch] != num && mp2.count(ch) > 0) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
