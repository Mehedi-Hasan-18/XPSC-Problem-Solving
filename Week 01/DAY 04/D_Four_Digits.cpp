#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string ans = to_string(n);
    int sz = ans.size();
    if(sz == 4) cout << ans << endl;
    else if(sz<4){
        int remain = 4-ans.size();
        for(int i=0;i<remain;i++){
            cout<<"0";
        }
        cout<<ans<<endl;
    }
    

    return 0;
}
