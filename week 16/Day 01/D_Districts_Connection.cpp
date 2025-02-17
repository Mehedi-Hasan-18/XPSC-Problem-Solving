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
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin >> v[i];
        }
        bool ok = false;
        for(int i=1;i<=n;i++){
            if(v[1] != v[i]){
                ok = true;
                break;
            }
        }

        if(ok){
            cout <<"YES\n";
            int district = -1;
            for(int i=2;i<=n;i++){
                if(v[1] != v[i]){
                    cout<<1<<" "<<i<<'\n';
                    district = i;
                }
            }
            for(int i=2;i<=n;i++){
               if(v[1]==v[i]){
                    cout << district <<" "<<i<<'\n';
                }
            }
        }
        else {
            cout <<"NO\n";
        }

        
    }

    
    return 0;
}
