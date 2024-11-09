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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        if (n == 2)
        {
            cout << 2 << endl;
            cout << v[0] << " " << v[1] << endl;
        }
        else
        {
            cout<<2<<endl;
            for(int i=n-1;i>0;i--){
                if(i==n-1){
                    cout<<v[i-2]<<" "<<v[i]<<endl;
                    int sum = v[i-2] + v[i];
                    v.pop_back();
                    if(sum %2 == 0) v[i-2] = sum/2 ;
                    else {
                        v[i-2] = sum /2+1;
                    }
                }
                else{
                    cout<<v[i]<<" " <<v[i-1]<<endl;
                    int sum = v[i-1] + v[i];
                    v.pop_back();
                    if(sum %2 == 0) v[i-1] = sum/2 ;
                    else {
                        v[i-1] = sum /2+1;
                    }
                }
            }
        }
    }

    return 0;
}
