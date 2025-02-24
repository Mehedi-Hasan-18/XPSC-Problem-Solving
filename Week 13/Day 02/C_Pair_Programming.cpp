#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for(int i=0;i<n;i++)
#define f_reverse for(int i=n-1;i>=0;i--)
using namespace std;

void solve(){
    int k,n,m;
    cin>>k>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
 
    int i=0,j=0;
    vector<int>ans;
    while(i<n || j<m){
        if(i<n && j<m){
            if(a[i]==0) ans.push_back(0), i++, k++;
            else if(b[j]==0) ans.push_back(0), j++, k++;
            else{
                if(a[i]<b[j] && a[i]<=k) ans.push_back(a[i]), i++;
                else if(a[i]>=b[j] && b[j]<=k) ans.push_back(b[j]), j++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        else if(i<n){
            if(a[i]==0) ans.push_back(0), i++, k++;
            else{
                if(a[i]<=k) ans.push_back(a[i]), i++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        else if(j<m){
            if(b[j]==0) ans.push_back(0), j++, k++;
            else{
                if(b[j]<=k) ans.push_back(b[j]), j++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
    }
    for(auto i : ans) cout<<i<<" ";
        cout<<"\n";
}  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        solve();
    }

    
    return 0;
}
