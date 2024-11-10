#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n>> k;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            v.push_back(c);
        }
        int l = 0, r = 0;
        vector<int> ans;
        int sum = 0;
        while (r < n)
        {
            if(v[r] != 'B') sum++;
            if(r-l+1 == k){
                ans.push_back(sum);
                if(v[l] != 'B'){
                    sum--;    
                }
                l++;r++;
            }
            else{
                
                r++;
            }
        }
        sort(ans.begin(),ans.end());
        cout << ans[0]<<endl;
    }

    return 0;
}
