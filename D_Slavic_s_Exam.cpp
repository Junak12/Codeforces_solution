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
        string s1, s2;
        cin >> s1 >> s2;
        int j = 0;
        for (int i = 0; i < s1.size(); ++i) {
            if (j < s2.size() && s1[i] == s2[j]) {
                ++j;
            } 
            else if (s1[i] == '?') {
                if (j < s2.size()) {
                    s1[i] = s2[j++];
                } 
                else {
                    s1[i] = 'a';
                }
            }
        }
        if (j == s2.size()) {
            cout << "YES" << endl;
            cout << s1 << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
