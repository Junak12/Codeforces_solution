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

    while(t--){
        int n;
        cin >> n;
        if (n == 1 || n == 3) {
            cout << "-1" << endl;
        }
        else {
            if (n % 2 == 0) {
                string ans = "";
                for (int i = 1 ; i <= n - 2; i += 2) {
                    ans +="33";
                }
                ans += "66";
                cout << ans << endl;
            }
            else {
                string ans1 = "";
                for (int i = 1; i < n - 5; i += 2) {
                    ans1 += "33";
                }
                ans1 += "36366";
                cout << ans1 << endl;
            }
        }
    }
}