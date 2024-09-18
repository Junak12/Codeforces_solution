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
        ll n, m, k;
        cin >> n >> m >> k;
        k -= 2;
        ll edge = n * (n - 1) / 2;
        if (k <= -1) {
            cout << "NO" << endl;
        }
        else if(m < n - 1) {
            cout << "NO" << endl;
        }
        else if (m > edge) {
            cout << "NO" << endl;
        }
        else if(k == 1) {
            if (edge == m) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else if (k == 0) {
            if(n == 1) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}