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
        ll a, b;
        cin >> a >> b;
        if (a > b) {
            cout << a << endl;
        }
        else {
            ll dif = abs(a - b);
            if (dif >= a) {
                cout << "0" << endl;
            }
            else {
                cout << a - dif << endl;
            }
        }
    }
    return 0;
}