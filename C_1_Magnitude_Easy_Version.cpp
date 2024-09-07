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
    cin>>t;

    while(t--){
        int n;
        cin>>n;
    
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll ps=0,ns=0;
        for(ll i=0;i<n;i++){
            ps+=a[i];
            ns=max(ns+a[i],abs(ps));
        }
        cout<<ns<<endl;
    }
}