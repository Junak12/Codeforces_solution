#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> compute_prefix_function(const string& s) {
    int n = s.size();
    vector<int> pi(n, 0);
    
    for (int i = 1; i < n; ++i) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

int main() {
    opt();
    string t;
    cin >> t;

    int n = t.size();
    vector<int> pi = compute_prefix_function(t);
    
    // Length of the longest proper prefix which is also a suffix
    int overlap_length = pi[n - 1];

    // Check the conditions for valid overlap
    if (overlap_length > 0 && overlap_length < n / 2) {
        cout << "YES" << endl;
        cout << t.substr(0, n - overlap_length) << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
