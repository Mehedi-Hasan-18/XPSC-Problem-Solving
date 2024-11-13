#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin >> x >> y >> z;
    int ans = 0,ans1=0;
    ans += x;
    ans += (y/2);
    ans1 += (y/2);
    ans1 += z;
    int left = 4-(x+y+z);
    ans += left;
    if(ans > ans1) cout <<"Yes\n";
    else cout <<"No\n";

    
    return 0;
}
