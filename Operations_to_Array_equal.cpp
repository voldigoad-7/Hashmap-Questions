#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec={1, 5, 2, 1, 3, 2, 1};
    int mx=0;
   unordered_map<int,int>memo;
  for(auto x:vec)
  {
      memo[x]++;
  }
  for(auto x:memo)
  {
      if(x.second>mx)
      {
          mx=x.second;
      }
  }
  cout<<vec.size()-mx;
    return 0;
