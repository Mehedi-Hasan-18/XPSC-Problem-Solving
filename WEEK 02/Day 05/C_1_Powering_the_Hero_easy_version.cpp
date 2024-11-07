#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        priority_queue<int>pq;
        vector<int>v(n+1);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            if(v[i] == 0){
                if(!pq.empty()){
                    ans += pq.top();
                    pq.pop();
                }
            }
            else{
                pq.push(v[i]);
            }
        }
        cout << ans << endl;
        
    }

    
    return 0;
}
