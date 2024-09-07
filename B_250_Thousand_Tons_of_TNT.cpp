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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int>st;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                st.insert(i);
                st.insert(n/i);
            }
        }
        ll ans=0;
        for(auto d:st){
            ll mx=0,mn=LLONG_MAX;
            int cnt=0;
            ll sum=0;
            for(int i=0;i<n;i++){
                sum+=a[i];
                cnt++;
                if(cnt==d){
                    mx=max(mx,sum);
                    mn=min(mn,sum);
                    sum=0;
                    cnt=0;
                }
            }
            ans=max(ans,mx-mn);
        }
        cout<<ans<<endl;
    }
    return 0;
}