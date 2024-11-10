#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n>>m;
    vector<int>a(n);
    vector<int>v1(m);
    for(int i=0; i<n;i++) cin >> a[i];
    for(int i=0; i<m;i++) cin >> v1[i];
    
    int n_pointers =0,m_pointers =0,cnt =0;
    long long ans = 0;
    while(m_pointers<m && n_pointers<n){
        int curr = a[n_pointers],cnt1=0,cnt2=0;
        while(n_pointers<n && a[n_pointers] == curr){
            n_pointers++;cnt1++;
        }
        while(m_pointers<m && curr>v1[m_pointers]) m_pointers++;
        while(m_pointers<m && v1[m_pointers] == curr){
            cnt2++;
            m_pointers++;
        }
        ans += (1LL * (cnt1*cnt2));
    }
    cout <<ans<<endl;

    
    return 0;
}
