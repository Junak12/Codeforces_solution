#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll d0=0,d1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2!=a[i]%2 && i%2==0){
            d0++;
        }
        if(i%2!=a[i]%2 && i%2==1) {
            d1++;
        }
    }
    if(d1!=d0){
        cout<<-1<<endl;
    
    }else{
        cout<<d1<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        solve();
    }
    return 0;
}
