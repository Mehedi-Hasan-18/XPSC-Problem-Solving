#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<ll>ans;
        map<ll,ll>cnt;
        for(int i=0;i<n;i++){
            cnt[a[i]]++;
            if(cnt[a[i]]>=2){
                ll value = a[i];
                while(true){
                    ll total = cnt[value];
                    if(cnt[value] < 2){
                        break;
                    }
                    cnt.erase(value);
                    for(int j=0;j<total/2;j++){
                        cnt[2*value]++;
                    }
                    if(total%2 != 0){
                        cnt[value]++;
                    }
                    value *= 2;
                }
            }
            ans.push_back(cnt.size());
        }
        for(auto val : ans){
            cout << val << " ";
        }
        cout << endl;
    }

    
    return 0;
}
