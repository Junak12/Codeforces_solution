#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

const int N=2*1e5+123;
vector<int>adj[N];
vector<int>par(N);

void dfs(int u,int p){
    par[u]=p;
    for(auto v:adj[u]){
        if(v==p)continue;
        dfs(v,u);
    }
}

int main(){
    opt();
    int t;
    //cin>>t;
    t=1;

    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,0);
        /*for(int i=0;i<n;i++){
            cout<<par[i]<<" ";
        }*/
        vector<int>clr(n+1);
        clr[1]=1;
        queue<int>q;
        int cnt=2,mx=1;
        for(auto d:adj[1]){
            q.push(d);
            clr[d]=cnt;
            mx=max(cnt,mx);
            cnt++;
        }
        while(q.size()>0){
            int x=q.front();
            q.pop();
            int cnt=1;
            for(auto d:adj[x]){
                if(d!=par[x]){
                    while(cnt==clr[x] || cnt==clr[par[x]])cnt++;
                    clr[d]=cnt;
                    mx=max(mx,cnt);
                    cnt++;
                    q.push(d);
                }
            }
        }
        cout<<mx<<endl;
        for(int i=1;i<=n;i++){
            cout<<clr[i]<<" ";
        }
        cout<<endl;
    }
}