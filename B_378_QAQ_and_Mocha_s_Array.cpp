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
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        bool ok=false;
        for (int i=0;i<n;i++) {
            cin>>v[i];
            if (v[i]==1) {
                ok=true;
            }
        }
        if (ok) {
            cout<<"Yes"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        int a=v[0];
        int idx=-1;
        bool ok1= false;
        for (int i=1;i<n;i++) {
            if (v[i]%a!=0) {
                idx= v[i];
                ok1= true;
                break;
            }
        }
        if (!ok1) {
            bool ok3=true;
            for (int i=0;i<n;i++) {
                if (v[i]%a!=0) {
                    ok3=false;
                    break;
                }
            }
            if (ok3) {
                cout<<"Yes"<<endl;
            } 
            else {
                cout<<"No"<<endl;
            }
            continue;
        }
        bool ok4= true;
        for (int i=0;i<n;i++) {
            if (v[i]%a!=0 && v[i]%idx!=0) {
                ok4=false;
                break;
            }
        }
        if (ok4) {
            cout<<"Yes"<<endl;
        } 
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
