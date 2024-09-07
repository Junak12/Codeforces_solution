#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
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
    //cin>>t;
    t=1;

    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                b[i][j]=0;
            }
        }
        //mid row=;
        int sum=0;
        int mid=n/2;
        for(int i=0;i<n;i++){
            if(b[mid][i] != 1){
                sum+=a[mid][i];
                b[mid][i]=1;
            }
        }
        //cout<<sum<<endl;
        //mid col;
        for(int i=0;i<n;i++){
            if(b[i][mid] != 1){
                sum+=a[i][mid];
                b[i][mid]=1;
            }
        }
        //cout<<sum<<endl;
        // main diagonal
        for(int i=0;i<n;i++){
            if(b[i][i] != 1){
                sum+=a[i][i];
                b[i][i]=1;
            }
        }
        //cout<<sum<<endl;
       //secondary diagonal;
        for(int i=0;i<n;i++){
            if(b[i][n-i-1] != 1){
                sum+=a[i][n-i-1];
                b[i][n-i-1]=1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}