#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin>>n;
  
  vector<pair<int,int>>arr;
  
  for(int i=0; i<n; i++)
  {
    int start, end;
    cin>>start>>end;
    
    arr.push_back({start, 1});
    arr.push_back({end, -1});
  }
  
  sort(arr.begin(), arr.end());
  
  long long prefix = 0;
  long long maxi = 0;
  
  for(int i=0; i<arr.size(); i++)
  {
    prefix += arr[i].second;
    maxi = max(maxi, prefix);
  }
  
  cout<<maxi<<endl;
}