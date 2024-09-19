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
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        bool zero = false, one = false, ok = false;
        for (int i = 0; i < n; ++i) {
            if (b[i] == 0) zero = true;
            if (b[i] == 1) one = true;
        }
        if (zero && one) {
            ok = true;
        }
        if ((!ok && is_sorted(a.begin(), a.end()) || ok )) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}