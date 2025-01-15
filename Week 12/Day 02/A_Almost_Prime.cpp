#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<bool>prime(n+1,true);
    vector<int> primeDivisors(n + 1, 0);
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i+i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            for (int j = i; j <= n; j += i) {
                primeDivisors[j]++;
            }
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (primeDivisors[i] == 2) {
            count++;
        }
    }

    cout << count <<endl;

    
    return 0;
}
