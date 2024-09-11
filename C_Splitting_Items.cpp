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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int mx = a[0];
        for (int i = 1; i < n && k > 0; i +=2) {
            int dif = a[i - 1] - a[i];
            dif = min(dif, k);
            a[i] += dif;
            k -= dif;
        }
        /*for (auto d : a) {
            cout << d << " ";
        }
        cout << endl;*/
        bool ok = false;
        ll sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; ++i) {
            if (!ok) {
                sum1 += a[i];
                ok = true;
            }
            else {
                sum2 += a[i];
                ok = false;
            }
        }
        cout << sum1 - sum2 << endl;
    }
    return 0;
}