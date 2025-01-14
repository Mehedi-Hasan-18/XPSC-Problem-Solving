#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e6+5;
vector<int>divisor(maxN);
// vector<int>divisor[maxN];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=1;i<maxN;i++){
        for(int j=i;j<maxN;j+=i){
            // divisor[j].push_back(i);
            divisor[j]++;
        }
    }
    int t;cin >> t;
    while(t--){
        int n;cin >>n;
        cout << divisor[n] << endl;
    }
    
    return 0;
}
