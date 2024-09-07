#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long
int main()
{
    opt();
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        string s;
        cin>>s;

        ll ans=0,cnt=0;
        for(auto d:s)
        {
            if(d=='A')
            {
                cnt++;
            }
            else
            {
                ans+=cnt;
                if(cnt>0)
                {
                    cnt=1;
                }
            }
        }
        cout<<min(ans,n-1)<<endl;
    }
    return 0;
}