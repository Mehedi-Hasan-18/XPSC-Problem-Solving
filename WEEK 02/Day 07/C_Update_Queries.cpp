#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string str;cin >> str;
        set<int>s;
        for(int i=0;i<m;i++){
            int x;cin >> x;
            s.insert(x);
        }
        string c;cin >>c;
        int idx =0;
        sort(c.begin(),c.end());
        for(auto val : s){
            str[val-1] = c[idx] ;
            idx++;
        }
        cout << str << endl;

    }

    
    return 0;
}
