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
        string s;
        cin >> s;
        if (n == 1) {
            if (s[0] == '1') {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        /*else if (n == 2 || n == 3) {
            int cnt_0 = 0, cnt_1 = 0;
            for (int i = 0; i < n; ++i) {
                if (s[i] == '0') {
                    cnt_0++;
                }
                else {
                    cnt_1++;
                }
            }
            if (cnt_0 > cnt_1) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }*/
        else {
            string s1 = "11";
            bool ok = false;
            for (int i = 0; i < n; ++i) {
                if (s.substr(i, 2) == s1) {
                    ok = true;
                    break;
                }
            }
            if (s[0] == '1') {
                ok = true;
            }
            if (s[n - 1] == '1') {
                ok = true;
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