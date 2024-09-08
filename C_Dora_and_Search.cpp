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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int l=0,r=n-1,mx=n,mn=1;
        while(l<r){
            if(v[l]==mn){
                l++;
                mn++;
            }
            else if(v[l]==mx){
                l++;
                mx--;
            }
            else if(v[r]==mn){
                r--;
                mn++;
            }
            else if(v[r]==mx){
                r--;
                mx--;
            }
            else{
                break;
            }
        }
        if(l<r){
            cout<<l+1<<" "<<r+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}