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

        priority_queue<ll, vector<ll>, greater<ll>> pq; 
        for (int i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            pq.push(x);
        }
        while (pq.size() > 1) {
            ll a = pq.top(); 
            pq.pop(); 
            ll b = pq.top(); 
            pq.pop();
            ll new_element = (a + b) / 2; 
            pq.push(new_element); 
        }
        cout << pq.top() << '\n';
    }
    return 0;
}
