#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

vector<int> compress(const vector<int>& a) {
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    sorted_a.erase(unique(sorted_a.begin(), sorted_a.end()), sorted_a.end());
    
    vector<int> compressed(a.size());
    for (int i = 0; i < a.size(); ++i) {
        compressed[i] = lower_bound(sorted_a.begin(), sorted_a.end(), a[i]) - sorted_a.begin();
    }
    return compressed;
}

class SegmentTree {
private:
    vector<int> tree;
    int size;
    
public:
    SegmentTree(int n) {
        size = n;
        tree.assign(2 * n, 0); 
    }
    void update(int pos, int value) {
        pos += size; 
        tree[pos] += value;
        for (pos /= 2; pos > 0; pos /= 2) {
            tree[pos] = tree[2 * pos] + tree[2 * pos + 1];
        }
    }
    int query(int l, int r) {
        int sum = 0;
        l += size; 
        r += size;  
        while (l < r) {
            if (l % 2 == 1) sum += tree[l++]; 
            if (r % 2 == 1) sum += tree[--r];  
            l /= 2;  
            r /= 2;  
        }
        return sum;
    }
};

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
        vector<int> compressed_a = compress(a);
        int max_val = *max_element(compressed_a.begin(), compressed_a.end()) + 1;
        SegmentTree segTree(max_val);

        ll result = LLONG_MAX;
        for (int i = n - 1; i >= 0; --i) {
            ll cnt = segTree.query(compressed_a[i] + 1, max_val);
            result = min(result, cnt + i);
            segTree.update(compressed_a[i], 1);
        }

        cout << result << endl;
    }

    return 0;
}
