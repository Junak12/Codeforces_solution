#include <bits/stdc++.h>
using namespace std;

#define optt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main() {
    optt();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        if (n % 2 == 0) {
            cout << "-1" << endl;
        } 
        else {
            vector<int> a(n);
            int left = 1, right = n;
            int i = 0, j = 1;
            while(j + 1 < n && i + 1 < n) {
                a[i] = left++;
                a[j] = right--;
                i += 2, j += 2;
            }
            if (i < n) {
                a[i] = left++;
            }
            for (auto d : a) {
                cout << d << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
