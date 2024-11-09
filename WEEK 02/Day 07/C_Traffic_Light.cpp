#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s.append(s);
        int ans = INT_MIN;
        int last = -1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == 'g'){
                last = i;           
            }
            if(s[i] ==c){
                ans = max(ans,last-i);
            }
        }
        cout << ans << endl;
    }

    
    return 0;
}

