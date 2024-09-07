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
    //cin >> t;
    t = 1;
    while(t--){
        int n;
        cin >> n;
        vector<int> v1(n);
        for (int i = 0; i < n; ++i) {
            cin >> v1[i];
        }
        int m;
        cin >> m;
        vector<int> v2(m);
        for (int i = 0; i < m; ++i) {
            cin >> v2[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int cnt = 0;
        vector<bool> v3(m, false);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (abs(v1[i] - v2[j]) <= 1 && !v3[j]) {
                    cnt++;
                    v3[j] = true;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
}
