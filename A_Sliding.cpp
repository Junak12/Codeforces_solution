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
        ll r, c, a, b;
        cin >> r >> c >> a >> b;
        ll r1 = (r - a) * (c - 1);
        ll r2 = (r - a) * (c);
        ll r3 = (c - b);
        cout << r1 + r2 + r3 << endl;
    }
}