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
    t = 1;
    //cin >> t;

    while(t--){
        string s;
        cin >> s;
        bool ok = false;
        int idx1 = -1, idx2 = -1;
        for (int i = 0; i< s.size(); ++i){
            if ( s[i] == 'R') {
                idx1 = i;
                //continue;
            }
            else if ( s[i] == 'M') {
                idx2 = i;
                //break;
            }
        }
        if ( idx1 < idx2) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}