#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

bool is_ok(vector<int>&a,int tar) {
    int mn=0,c,p=0;
    if(a[0]>=tar){
        c=1;
    }
    else {
        c=-1;
    }
    for(int i=1;i<a.size();i++){
        mn=min(mn,p);
       // cout<<mn<<endl;
        p=c;
        if(a[i]>=tar){
            c++;
        }
        else{
            c--;
        }
        if(c-mn>0){
            return true;
       }
    }
    return false;
}
int main() {
    opt();
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }
        int l=-1,r=1e9+123;
        while(r-l>1){
            int mid=(l+r)/2;
            if(is_ok(v,mid)) l=mid;
            else r=mid;
        }
        cout<<l<<endl;
    }
    return 0;
}