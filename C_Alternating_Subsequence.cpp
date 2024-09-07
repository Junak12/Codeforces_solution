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
        int idx_1=-1, idx_2=-1;
        int mx_neg=INT_MIN; 
        bool negative_range=false;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                if(!negative_range){
                    idx_1=i;
                    negative_range=true;
                }
                idx_2=i;
                mx_neg=max(mx_neg,a[i]); 
            } 
            else {
                if(negative_range){
                    for(int j=idx_1;j<=idx_2;j++){
                        a[j]=mx_neg; 
                    }
                    negative_range=false; 
                    mx_neg=INT_MIN; 
                }
            }
        }
        if(negative_range){
            for(int j=idx_1;j<=idx_2;j++){
                a[j]=mx_neg;
            }
        }
        idx_1=-1;
        idx_2=-1;
        int mx_pos=INT_MIN;
        bool positive_range=false;
        for(int i=0;i<n;i++){
            if(a[i]>=0){
                if(!positive_range){
                    idx_1=i;
                    positive_range=true;
                }
                idx_2=i;
                mx_pos=max(mx_pos,a[i]);
            } 
            else {
                if(positive_range){
                    for(int j=idx_1;j<=idx_2;j++){
                        a[j]=mx_pos; 
                    }
                    positive_range=false; 
                    mx_pos=INT_MIN; 
                }
            }
        }
        if(positive_range){
            for(int j=idx_1;j<=idx_2;j++){
                a[j]=mx_pos;
            }
        }
        // for neg_pos
        vector<int>v1;
        bool ok=true;
        for(int i=0;i<n;i++){
            if(a[i]<0 && ok){
                v1.push_back(a[i]);
                ok=false;
            }
            else if(a[i]>=0 &&!ok){
                v1.push_back(a[i]);
                ok=true;
            }
        }
       /* for(auto d:v1){
            cout<<d<<" ";
        }*/

        // pos to neg
        vector<int>v2;
        bool tik=true;
        for(int i=0;i<n;i++){
            if(a[i]>=0 && tik){
                v2.push_back(a[i]);
                tik=false;
            }
            else if(a[i]<0 &&!tik){
                v2.push_back(a[i]);
                tik=true;
            }
        }
       /* for(auto d:v2){
            cout<<d<<" ";
        }*/
      /* cout<<endl;
        for(auto d:v1){
            cout<<d<<" ";
        }
        cout<<endl;*/
        if(v1.size()>v2.size()){
            ll sum=0;
            for(auto d:v1){
                sum+=d;
            }
            cout<<sum<<endl;
        }
        else{
            ll sum=0;
            for(auto d:v2){
                sum+=d;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
