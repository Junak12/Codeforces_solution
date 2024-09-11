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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string result(n, '_');  

        stack<int> st;//fucking internet speed.
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) { 
                if (!st.empty()) {
                    result[i] = ')';
                    st.pop();
                } else {
                    result[i] = '(';
                    st.push(i);
                }
            } else {
                result[i] = s[i];
                if (s[i] == '(') {
                    st.push(i);
                } else if (s[i] == ')') {
                    if (!st.empty() && result[st.top()] == '(') {
                        st.pop();
                    }
                }
            }
        }
        while (!st.empty()) {
            int pos = st.top();
            st.pop();
            result[pos] = '(';
            for (int i = pos + 1; i < n; ++i) {
                if (result[i] == '_') {
                    result[i] = ')';
                    break;
                }
            }
        }
        vector<int> opn,cls;
        for (int i = 0; i < result.size(); ++i) {
            if (result[i] == '(') opn.push_back(i+1);
            else cls.push_back(i+1);
        }
        sort(opn.begin(),opn.end());
        sort(cls.begin(),cls.end());
        ll ans = 0;
        for (int i = 0; i < cls.size(); ++i) {
            ans += abs(opn[i] - cls[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
