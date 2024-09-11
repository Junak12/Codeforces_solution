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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        map<int,int> mp;
        mp[a[0]] = 1;
        bool ok = true;
        for (int i = 1; i < n; ++i) {
            mp[a[i]]++;
            if(mp.count(a[i] - 1) == 0 && mp.count(a[i] + 1) == 0) {
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
    return 0;
}