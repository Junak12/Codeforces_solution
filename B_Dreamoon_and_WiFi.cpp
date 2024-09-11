#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int tot = 0, suc = 0;
void ways (int idx, int n, int pos, int ans,string &s2) {
    if(idx == n) {
        if(pos == ans) {
            suc++;
        }
        tot++;
        return;
    }
    if (s2[idx] == '?') {
        ways(idx + 1, n, pos + 1, ans, s2);
        ways(idx + 1, n, pos - 1, ans, s2);
    }
    else {
        if(s2[idx] == '+') {
            pos++;
            ways(idx + 1, n, pos , ans, s2);
        }
        else if(s2[idx] == '-') {
            pos--;
            ways(idx + 1, n, pos , ans, s2);
        }
    }
}

int main(){
    opt();
    int t;
    //cin >> t;
    t = 1;

    while (t--){
        string s1, s2;
        cin >> s1 >> s2;
        ll ans = 0;
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i] =='+') {
                ans++;
            }
            else {
                ans--;
            }
        }
        ways(0,s2.size(),0,ans,s2);
        cout << fixed << setprecision(12) << (double)suc / tot << endl;
    }
}