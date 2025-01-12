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
        int n,k;cin >>n>>k;
        vector<pair<int,int>>v;
        vector<int>sec,result(n);
        for(int i=0;i<n;i++){
            int x;cin >> x;
            v.push_back({x,i});
        }
        for(int i=0;i<n;i++){
            int x;cin >> x;
            sec.push_back(x);
        }
        sort(v.begin(),v.end());
        sort(sec.begin(),sec.end());
        for(int i=0;i<n;i++){
            result[v[i].second] = sec[i];
        }
        for(auto val : result){
            cout << val <<" ";
        }
        cout << endl;
        
    }

    
    return 0;
}
