#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int>ml;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    int cnt = 0;
    int problem = 1;
    while(!ml.empty()){
        auto LB = ml.lower_bound(problem);
        if(LB!=ml.end()){
            ml.erase(LB);
            cnt++;
            problem++;
        }
        else break;
    }
    cout << cnt << endl;

    return 0;
}
