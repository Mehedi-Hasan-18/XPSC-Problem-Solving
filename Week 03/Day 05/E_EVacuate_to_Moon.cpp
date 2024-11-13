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
        int cars, c_station, hours;
        cin >> cars >> c_station >> hours;
        vector<int> car_capacity(cars);
        for (int i = 0; i < cars; i++)
            cin >> car_capacity[i];
        vector<int> station_capacity(c_station);
        for (int i = 0; i < c_station; i++)
            cin >> station_capacity[i];
        sort(car_capacity.begin(), car_capacity.end(), greater<int>());
        sort(station_capacity.begin(), station_capacity.end(), greater<int>());
        long long  ans = 0;
        for (int i = 0; i < min(cars,c_station); i++)
        {
            ans += min(1LL* hours*station_capacity[i],1LL* car_capacity[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
