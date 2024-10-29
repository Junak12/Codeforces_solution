#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        set<ll> st; 
        st.insert(0); 
        ll sum = 0, seg = 0; 

        for (int i = 0; i < n; ++i) {
            sum += a[i]; 

            if (st.count(sum)) {
                seg++; 
                st.clear(); 
                st.insert(0); 
                sum = 0; 
            }
            st.insert(sum);
        }
        cout << seg << endl;
    }

    return 0;
}
