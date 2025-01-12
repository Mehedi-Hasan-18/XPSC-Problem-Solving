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
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        if(is_sorted(v.begin(),v.end())){
            cout << 0 << endl;
            continue;
        }
        int ordered = 0;
        for(int i=0;i<n;i++){
            if(v[i] == ordered+1){
                ordered++;
            }
        }
        int bug = n-ordered;
        int ans = (bug+k-1)/k;
        cout << ans <<endl;
        
    }

    
    return 0;
}
