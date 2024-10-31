#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n;
    cin >> n;
    vector<long long int>v;
    long long int ans = 0;
    for(long long int i=0;i<n;i++){
        long long int x;
        cin >> x;
        ans+=x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(ans%2 !=0){
        for(auto val : v){
            if(val%2 !=0){
                ans -= val;
                break;
            }
        }
    }
    // for(int i=0;i<v.size();i++){
    //     if(ans%2!=0){
    //         ans -= v[i];
    //     }
    // }
    cout << ans << endl;
    
    return 0;
}
