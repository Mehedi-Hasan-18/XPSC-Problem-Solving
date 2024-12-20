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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int flag = 0;
        int first = -1, last = -1;
        
        for (int i = 0; i < n; i++)
        {
            int num = v[i];
            if (flag)
            {
                if(num <= first && num >= last){
                    last = num;
                    cout << 1;
                }
                else cout <<0;
            }
            else
            {
                if (first == -1)
                {
                    first = num;
                    last = num ;
                    cout << 1 ;

                }
                else if(num >= last){
                    last = num;
                    cout <<1;
                }
                else if(num <=first){
                    last = num;
                    flag = 1;
                    cout <<1;
                }
                else cout <<0;
            }
        }
        cout <<endl;
    }

    return 0;
}
