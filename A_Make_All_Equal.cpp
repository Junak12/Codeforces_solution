#include <bits/stdc++.h>
using namespace std;

#define optt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main(){
    optt();
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        int mx = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
            if (freq[a[i]] > mx) {
                mx = freq[a[i]];
            }
        }

        ll sum = n; 
        cout << sum - mx << endl;
    }

    return 0;
}
