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
        int a, b;
        cin >> a >> b;
        if (b % 2 == 0 && a % 2 == 0) {
            cout << "YES" << endl;
        } 
        else if (b % 2 != 0 && a >= 2 && a % 2 == 0) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
