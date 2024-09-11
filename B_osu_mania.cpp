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
        int n;
        cin >> n;
        vector<int> col(n);
        
        for (int i = 0; i < n; ++i) {
            string r;
            cin >> r;
            for (int j = 0; j < 4; ++j) {
                if (r[j] == '#') {
                    col[i] = j + 1;
                    break;
                }
            }
        }
        
        for (int i = n - 1; i >= 0; --i) {
            cout << col[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}