#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        int x; cin >> x;
        v[x] = i;
    }
    int check = 1,result = 1;
    for(int i=1;i<=n;i++){
        if(check > v[i]){
            result++; 
        }
        check = v[i];
    }
    cout << result <<endl;

    
    return 0;
}
