#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
 
vector<int> primes;
int spf[1000005];
vi pf[100005];
ll a,b;
 
ll solve(ll n){
    ll x = n;
    ll ans = 1;
    priority_queue<ll> pq;

    for (int i = 0; i < pf[n-a].size() and x != 1; i++){
        int cnt = 0;
        while (x%pf[n-a][i] == 0){
            x /= pf[n-a][i];
            cnt ++;
        }
        pq.push(cnt+1);
        ans *= cnt+1;
    }
    if (x != 1){
        pq.push(2);
        ans *= 2;
    }
    
    ll cur = ans;

    ans = 0;
    while (!pq.empty()){
        ans += cur;
        ll highest_freq = pq.top();
        pq.pop();
        cur /= highest_freq;
        cur *= (highest_freq-1);
        if (highest_freq > 2) pq.push(highest_freq-1);
    }
    
    return ans;
}
 
int main() {
	
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cin >> a >> b;
	 
	for (int i = 0; i < 1000005; i++){
	    spf[i] = -1;
	}
	for (int i = 2; i < 1000005; i++){
	    if (spf[i] == -1){
    	    spf[i] = i;
    	    if (i < 1000) primes.push_back(i);
    	    for (ll j = ((a-1)-((a-1)%i))+i; j <= b; j += i){
    	        pf[j-a].push_back(i);
    	    }
    	    
	    }
	    for (int j = 0; j < primes.size() and primes[j] <= spf[i] and i*primes[j] <= 1000000; j++){
	        spf[primes[j]*i] = primes[j];
	    }
	}
    ll total = 0;
    
    for (ll j = a; j <= b; j++){
        total += solve(j);
    }
    cout << total << endl;
}  