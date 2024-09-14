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
        int n,m,q;cin>>n>>m>>q;
        vector<int>v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int x;cin>>x;
        if(x==v[0] or x==v[1]){
            cout<<0<<endl;
            continue;
        }
        if(x>v[0] and x<v[1]){
            cout<<(v[1]-v[0])/2<<endl;
            continue;
        }
        if(x<v[0]){
            cout<<v[0]-1<<endl;
            continue;
        }
        if(x>v[1]){
            cout<<n-v[1]<<endl;
        }
    }
    return 0;
}