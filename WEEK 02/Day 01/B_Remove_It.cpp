#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    for(int i = 0;i<n;i++){
        if(v[i] !=x) cout << v[i] <<" ";
    }

    
    return 0;
}
