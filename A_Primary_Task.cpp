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
        string s;
        cin >> s;
        if (s.size() <= 2) {
            cout << "NO" << endl;
            continue;
        }
        string res = "";
        for (int i = 0; i < 2; ++i) {
            res += s[i];
        }
        if(res != "10") {
            cout << "NO" << endl;
            continue;
        }
        string ans = "";
        for (int i = 2; i < s.size(); ++i) {
            ans += s[i];
        }
        if (ans[0] == '1') {
            if (ans.size() >= 2) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else if (ans[0] =='0') {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}