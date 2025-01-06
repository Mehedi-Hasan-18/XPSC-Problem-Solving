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
        ll n;cin >>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());

        auto ok = [&](int time){
            int cnt = 1,l=0;
            for(int r=0;r<n;r++){
                if(v[r]-v[l] > 2*time){
                    cnt++;
                    l = r;
                }
            }
            return cnt<=3;
        };

        ll ans = 0;
        ll low = 0,high = 1e9;

        while(low<=high){
            ll mid = low + (high-low)/2;
            if(ok(mid)){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        cout << ans <<endl;
        
    }

    
    return 0;
}
