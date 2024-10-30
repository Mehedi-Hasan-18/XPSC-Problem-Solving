#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int,int,greater<int>>mp;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int mx = INT_MIN;
    for(auto val : mp){
        if(val.second > mx){
            mx = val.second;
        }
    }
    cout<<mx;
    return 0;
}
