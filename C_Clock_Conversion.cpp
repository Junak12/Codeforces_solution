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
        string s;
        cin>>s;
        string s1=s.substr(0,2);
        //cout<<s1<<endl;
        string s2=s.substr(3,4);
        //cout<<s2<<endl;
        string ans="";
        int x=stoi(s1);
        //cout<<x<<endl;
        if(x>12){
            int y=abs(12-x);
            string res=to_string(y);
            string res2=to_string(0);
            if(res.size()<2){
                ans+=res2;
            }
            ans+=res;
            ans+=':';
            ans+=s2;
            string res1="PM";
            ans+=" ";
            ans+=res1;
            cout<<ans<<endl;
        }
        else if(x==12){
            string z=to_string(x);
            ans+=z;
            ans+=":";
            ans+=s2;
            ans+=" ";
            ans+="PM";
            cout<<ans<<endl;
        }
        if(x<12){
            string z=to_string(x);
            string zero=to_string(0);
            if(z.size()<2){
                ans+=zero;
            }
            ans+=z;
            if(ans=="00"){
                string ans1="";
                ans1+="12";
                ans1+=":";
                ans1+=s2;
                ans1+=" ";
                ans1+="AM";
                cout<<ans1<<endl;
            }
            else{
            ans+=":";
            ans+=s2;
            ans+=" ";
            ans+="AM";
            cout<<ans<<endl;
            }
        }
    }
    return 0;
}