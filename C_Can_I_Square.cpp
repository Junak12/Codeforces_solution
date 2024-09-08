#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ull unsigned long long
const int N = 200000; 
const int AI = 1000000000; 

void precompute(unordered_set<ull>&sq) {
    for (ull i = 1; i * i <= AI * N; ++i) {
        sq.insert(i * i);
    }
}

int main(){
    opt();
    int t;
    cin >> t;

    unordered_set<ull> sq;;
    precompute(sq);

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ull sum = 0;
        for (ll i = 0; i < n; ++i) {
            sum += a[i];
        }
        if (sq.count(sum)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
