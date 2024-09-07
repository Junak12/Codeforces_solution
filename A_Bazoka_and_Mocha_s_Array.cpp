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
    vector<string>v;

    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool ok=false;
        for(int i=0;i<n;i++){
            vector<int>rot(v.begin()+i,v.end());
            rot.insert(rot.end(),v.begin(),v.begin()+i);
            if(is_sorted(rot.begin(),rot.end())){
                ok=true;
                break;
             }
        }
        if(ok){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}