#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        long long sum = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum += abs(v[i]);
        }
        int ans = 0;
        int count = 0;
        for(auto x : v){
            if(x==0 && count == 0) continue;
            if(x<=0){
                count++;
            }
            else{
                if(count){
                    ans++;
                }
                count = 0;
            }
        }
        if(count) ans++;
        cout << sum <<" "<< ans <<endl;
    }

    
    return 0;
}
