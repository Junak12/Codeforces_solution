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
        string s1,s2;
        cin>>s1>>s2;
        bool ans=true;
        bool up=true,dwon=true;
        for(int i=0;i<n;i++){
            up=dwon;
            dwon=false;
            if(i%2==0 && s2[i]=='>'){
                dwon=true;
            }
            if(i%2==1 && s1[i]=='>'){
                dwon=true;
            }
            if(!up && !dwon){
                ans=false;
                break;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}