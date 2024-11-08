#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>p(n);
        for(int i=0;i<n;i++){
            cin >> p[i];
        }
        string s;cin >>s;
        vector<ll>q(p);
        sort(q.begin(),q.end());
        vector<ll>ones;
        vector<ll>zero;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                ones.push_back(p[i]);
            }
            else{
                zero.push_back(p[i]);
            }
        }
        map<ll,ll>mp;
        int j = q.size()-1;
        sort(zero.rbegin(),zero.rend());
        sort(ones.rbegin(),ones.rend());
        for(int i=0;i<ones.size();i++){
            mp[ones[i]] = q[j];
            j--;
        }
        for(int i=0;i<zero.size();i++){
            mp[zero[i]] = q[j];
            j--;
        }
        vector<ll>ans(n);
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ans[i] = mp[p[i]];
            }
            else{
                ans[i]=mp[p[i]];
            }
        }
        for(auto it : ans) cout <<it <<" ";
        cout << endl;
    }

    
    return 0;
}
