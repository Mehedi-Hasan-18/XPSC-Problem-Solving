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
        vector<int>v(n),prifix(n+1);
        f_range cin >> v[i];
        sort(v.rbegin(),v.rend());
        for(int i=1;i<=n;i++){
            prifix[i] = prifix[i-1] + v[i-1];
        }
        while(k--){
            int q;
            cin >> q;
            auto ans = lower_bound(prifix.begin(),prifix.end(),q);
            if(ans != prifix.end()){
                cout << ans - prifix.begin()<<endl;
            }
            else cout <<-1<<endl;
        }
        
    }

    
    return 0;
}
