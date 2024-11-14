#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;              cin>>n;
        string s;           cin>>s;
 
        vector<ll> arry;
 
        ll total=0;
        int Change=0;
 
        for(int i=0;i<n;i++){
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L'){
                if(R>L){
                    Change++;
                    total+=R;
                    arry.push_back(R-L);
                }
                else{
                    total+=L;
                }
            }
            else{
                if(L>R){
                    Change++;
                    arry.push_back(L-R);
                    total+=L;
                }
                else{
                    total+=R;
                }
            }
        }
 
        vector<ll> ans(n+1);
 
        for(int i=Change;i<=n;i++){
            ans[i]=total;
        }
 
        sort(arry.begin(),arry.end(),greater<ll>());
 
        for(int i=Change-1;i>=1;i--){
            total-=arry.back();
            arry.pop_back();
            ans[i]=total;
        }
 
 
 
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}
