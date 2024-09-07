#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

struct result {
    int bal;
    int pos;
    char ch;
};

bool cmp(const result& a, const result& b) {
    if (a.bal==b.bal) {
        return a.pos>b.pos;
    }
    return a.bal<b.bal;
}

int main() {
    opt();
    int t;
    //cin>>t;
    t=1;

    while(t--) {
        string s;
        cin>>s;
        int n=s.size();
        vector<result>v;
        int cnt=0;
        for (int i=0;i<n;i++) {
            v.push_back({cnt,i,s[i]});
            if (s[i]=='(') {
                cnt++;
            } 
            else {
                cnt--;
            }
        }
        sort(v.begin(),v.end(),cmp);
        string ans;
        for (auto d:v) {
            ans.push_back(d.ch);
        }
        cout<<ans<<endl;
    }
    return 0;
}
