#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin >> n >> m;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    vector<pair<ll,ll>>vp;
    for(ll i=0;i<n;i++){
        vp.push_back({v[i],i+1});
    }
    sort(vp.begin(),vp.end());
    for(ll i=0;i<n;i++){
        ll first_number = vp[i].first;
        ll front = i+1,rear=n-1;
        while(front<rear){
           ll sum = first_number+ vp[front].first + vp[rear].first;
            if(sum == m){
                cout << vp[i].second <<" "<<vp[front].second <<" "<<vp[rear].second<<endl; 
                return 0;
            }
            else if(sum > m) rear--;
            else front++;
        }
    }
    cout <<"IMPOSSIBLE\n";
    
    return 0;
}
