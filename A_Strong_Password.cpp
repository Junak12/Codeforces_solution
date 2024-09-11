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
        string s;
        cin >> s;

        int n = s.size();
        int max_time = 2;
        for (int i = 1; i < n; i++) {
            max_time += (s[i] == s[i - 1]) ? 1 : 2;
        }
        int i = 0;
        for (i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                char c = 'a';
                while (c == s[i]) {
                    c++;
                }
                cout << s.substr(0, i + 1) + c + s.substr(i + 1) << endl;
                break; 
            }
        }
        if (i == n - 1) { 
            char c = 'a';
            while (c == s[n - 1]) {
                c++;
            }
            cout << s + c << endl;
        }
    }

    return 0;
}