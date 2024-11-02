#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>a(n),b(n);
        for(long long i=0;i<n;i++){
            cin >> a[i];
        }
        for(long long i=0;i<n;i++){
            cin >> b[i];
        }
        long long cnt = 0,idx = -1;
        for(long long i=0;i<n;i++){
            if(min(a[i],b[i]) != b[i]){
                cnt++;
                idx = i;
            }
        }
        if(cnt == 0 || cnt > 1){
            long long ans = 0;
            for(long long i=0;i<n;i++){
                ans += min(a[i],b[i]);
            }
            cout << ans <<"\n";
        }
        else {
            long long ans=0 , res = 0;
            for(long long i=0;i<n;i++){
                ans += b[i];
            }
            res = ans ;
            for(long long i=0;i<n;i++){
                if(i != idx){
                    long long currentValue = res-b[idx]-b[i]+a[i]+a[idx];
                    ans = min (ans,currentValue);
                }
            }
            cout << ans <<"\n";
        }
        
    }
    return 0;
}
