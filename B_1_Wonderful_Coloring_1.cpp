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

    while(t--){
        string s;
        cin >> s;
        map <char, int> mp;
        for (auto d : s) {
            mp[d]++;
        }
        int one = 0, two = 0;
        for (auto d : mp) {
            if (d.second > 1) {
                two++;
            }
            else {
                one++;
            }
        }
        cout<< one/2 + two  << endl;
    }
    return 0;
}