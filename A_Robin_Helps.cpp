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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int g = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                g += a[i]; 
            } 
            else if (a[i] == 0 && g > 0) {
                g--;
                cnt++;  
            }
        }
        cout << cnt << endl; 
    }
    
    return 0;
}
