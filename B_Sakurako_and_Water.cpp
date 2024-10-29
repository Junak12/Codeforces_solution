#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));  
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    
    int count = 0;  

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] < 0) {
              
                int applications_needed = abs(v[i][j]);
                count += applications_needed;  
                
                
                for (int k = 0; k < n; k++) {
                    if (i + k < n && j + k < n) { 
                        v[i + k][j + k] += applications_needed;
                    }
                }
            }
        }
    }
    
    cout << count << endl;  
}

int main() {
    opt();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));  
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            }
        }
        ll cnt = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (a[i][j] < 0) {
                    ll ned = abs(a[i][j]);
                    cnt += ned;
                    for (int k = 0; k < n; ++k) {
                        if (i + k < n && j + k < n) {
                            a[i + k][j + k] += ned;
                        }
                    }
                }
            }
        }
        cout << cnt  << endl;
    }
    return 0;
}