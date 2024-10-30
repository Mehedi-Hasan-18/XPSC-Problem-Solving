#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string,int>mp;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=n-1;i>=0;i--){
        if(mp.find(v[i])!= mp.end()){
            mp[v[i]] +=1;
        }
        else{
            cout<<v[i]<<endl;
            mp[v[i]] = 1;
        }
    }
    return 0;
}
