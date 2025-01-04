#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first;
        v[i].second = i;
    } 
    int cnt = 0;
    set<pair<int,int>>s;
    for(int i=0;i<n;i++){
        auto it = s.upper_bound(v[i]);
        if(it != s.end()){
            s.erase(it);
        }
        else {
            cnt++;
        }
        s.insert(v[i]);
    }
    cout << cnt <<endl;

    
    return 0;
}
