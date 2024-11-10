#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n>>m;
    vector<int>v(n);
    vector<int>v1(m);
    for(int i=0; i<n;i++) cin >> v[i];
    for(int i=0; i<m;i++) cin >> v1[i];
    
    int n_pointers =0,m_pointers =0,cnt =0;
    while(m_pointers<m){
        if(n_pointers<n && v[n_pointers] < v1[m_pointers]){
            cnt++;n_pointers++;
        }
        else {
            cout <<cnt <<" ";
            m_pointers++;
        }
    }

    
    return 0;
}
