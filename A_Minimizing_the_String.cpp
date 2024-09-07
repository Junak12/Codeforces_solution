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
    //cin >> t;
    t = 1;

    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int idx = -1;
        for (int i = 0; i < n - 1; ++i){
            if (s[i] > s[i + 1]){
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            for (int i = 0; i < n - 1; ++i){
                cout << s[i];
            }
        }
        else {
            for (int i = 0; i < n; ++i){
                if (i == idx)continue;
                cout << s[i];
            }
            cout << endl;
        }
        /*string s1 = s;
        sort(s1.begin(),s1.end());
        char ch = s1[n - 1];
        bool ok = false;
        for (int i = 0; i < n; ++i) {
            if(!ok && s[i] == ch) {
                //cout << s[i] ;
                ok = true;
            }
            else {
                cout << s[i];
            }
        }
        cout << endl;*/
    }
    return 0;
}