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
        string ans = "aeiou";
        string reans = "uoiea"; 
        string res = "";
        while (res.size() < n) {
            for (int i = 0; i < 5 && res.size() < n; ++i) {
                res += ans[i];
            }
            for (int i = 0; i < 5 && res.size() < n; ++i) {
                res += reans[i];
            }
        }
        sort(res.begin(), res.end());
        cout << res << endl;
    }
    
    return 0;
}
