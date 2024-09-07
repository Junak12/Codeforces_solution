#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

bool cmp (string &a, string &b) {
    return a + b < b + a;
}

int main(){
    opt();
    int t;
    //cin >> t;
    t = 1;

    while(t--){
        int n;
        cin >> n;
        vector<string> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        //cout << "Hi" << endl;
        /*for (auto d : a) {
            cout << d << endl;
        }*/
        sort(a.begin(), a.end(), cmp);
        for (auto d : a) {
            cout << d;
        }
        cout << endl;
    }
}
