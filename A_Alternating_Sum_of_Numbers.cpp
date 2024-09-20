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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll s1 = 0, s2 = 0;
        for (int i = 0; i < n; ++i) {
            if(i % 2 == 0) {
                s1 += a[i];
            }
            else {
                s1 -= a[i];
            }
        }
        cout << s1 << endl;
    }
}