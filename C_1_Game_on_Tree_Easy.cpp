#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

const int N=2*1e5+123;
vector<int>adj[N];
bool vis[N];

void dfs(int u){
    vis[u]=true;
    for(auto d:adj[u]){
        if(vis[d]==false){
            dfs(d);
        }
    }
}

int main(){
    opt();
    int t;
    //cin>>t;
    t=1;
    for(int i=0;i<=N;i++){
        adj[i].clear();
        vis[i]=false;
    }

    while(t--){
        int n,tt;
        cin>>n>>tt;
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int u;
        cin>>u;
        //cout<<u<<endl;
        dfs(u);
        if(vis[u]==true){
            cout<<"Ron"<<endl;
        }
        else{
            cout<<"Hermione"<<endl;
        }
    }
    return 0;
}