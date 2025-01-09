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
    ll t;cin >>t;
    while(t--){
        ll n,x;cin >>n>>x;
        vector<ll>height(n);
        for(int i=0;i<n;i++){
            cin >> height[i];
        }
        sort(height.begin(),height.end());
        ll l = 1,r=1e10,ans=0;
        while(l<=r){
            ll total_water = 0;
            ll mid = l + (r-l)/2;
            for(int i=0;i<n;i++){
                if(height[i]<mid){
                    
                    total_water+=(mid-height[i]);
                }
            }
            if(total_water>x){
                r = mid-1;
            }
            else{
                ans = mid;
                l = mid+1;
            }
            
        }
        cout << ans <<endl;
        
    }

    
    return 0;
}
