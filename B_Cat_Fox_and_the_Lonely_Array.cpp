#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main()
{
    opt();
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans=1;
        int mx=*max_element(a.begin(),a.end());
        int n1=log2(mx) + 1;
        for (int i=0; i<n1; i++)
        {
            int mask=1<<i;
            cout<<"mask"<<" "<<mask<<endl;
            int cnt=0;
            int curr_mx=0;
            for (int j=0;j<a.size(); j++)
            {
                int x= a[j]&mask;
                cout<<x<<endl;
                if (!(a[j]&mask))
                {
                    cnt++;
                }
                else
                {
                    curr_mx=max(curr_mx,cnt);
                    cnt=0;
                }
            }
            curr_mx=max(curr_mx,cnt);
            if (cnt<a.size())
            {
                ans=max(ans,curr_mx + 1);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

