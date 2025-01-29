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
    int n;cin >>n;
    map<int,int>d;
    for(int i=0;i<n;i++){
        int l,r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }
    ll sum = 0;
    bool ok = true;

    for(auto val : d){
        sum += val.second;
        if(sum > 2){
            ok = false;
            break;
        }
    }
    
    if(ok) cout <<"YES\n";
    else cout <<"NO\n";
    
    return 0;
}
