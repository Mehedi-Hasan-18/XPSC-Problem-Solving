#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for(int i=0;i<n;i++)
#define f_reverse for(int i=n-1;i>=0;i--)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int>allPrime= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ; 
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<11;j++){
                if(v[i]%allPrime[j]==0){
                    mp[allPrime[j]].push_back(i);
                    break;
                }
            }
        }  
        vector<int>ans(n);
        int count = 1;
        for(auto val : mp){
            for(auto num : val.second){
                ans[num] = count;
            }
            count++;
        } 
        cout << mp.size()<<'\n';
        for(auto val : ans){
            cout << val <<" ";
        }  
        cout <<'\n'; 
    }

    
    return 0;
}
