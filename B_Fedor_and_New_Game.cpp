#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

bool is_ok(int x,int k){
    int cnt=0;
    while(x>0){
        if(x&1){
            cnt++;
        }
        x=x>>1;
    }
    return cnt<=k;
}

int main(){
    opt();

        int n,m,k;
        cin>>n>>m>>k;
        int a[m+1];
        for(int i=0;i<=m;i++){
            cin>>a[i];
        }
        int cnt=0;
        int me=a[m];
        for(int i=0;i<m;i++){
            int x=a[i]^me;
            if(is_ok(x,k)){
                cnt++;
            }
        }
        cout<<cnt<<endl;
}