#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        if (n == 3) {
            cout << 0 << endl;
        } else {
            int ans1 = v[n-1] - v[2]; 
            int ans2 = v[n-3] - v[0]; 
            int ans3 = v[n-2] - v[1];
            cout << min({ans1, ans2, ans3}) << endl;
        }
    }
    
    return 0;
}
