#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    string name ,ip;
    map<string,string>mp;
    for(int i=0;i<n;i++){
        cin >> name >> ip;
        mp[ip] = name;
    }
    string command,ip1;
    for(int i=0;i<m;i++){ 
        cin >> command >> ip1;
        ip1.pop_back();
        // if(mp.find(ip1)!= mp.end()){
        //     cout << mp[ip1] << '\n';
        // }
        cout << command <<" " <<ip1<<";" << " "<<"#"<<mp[ip1]<<'\n';
    }

    
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, m;
//     cin >> n >> m;
    
//     string name, ip;
//     map<string, string> mp;
//     for (int i = 0; i < n; i++) {
//         cin >> name >> ip;
//         mp[ip] = name;
//     }

//     string command, ip1;
//     for (int i = 0; i < m; i++) { 
//         cin >> command >> ip1;

//         cout << command << " " << ip1 << " #" << mp[ip1] << '\n';
//     }

//     return 0;
// }
