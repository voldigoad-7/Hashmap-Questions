#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec={3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2};
   unordered_map<int,int>memo;
   int mx_dist=0;
   for(int i=0;i<vec.size();i++)
   {
       if(memo.find(vec[i])==memo.end())
       {
           memo[vec[i]]=i;
       }
       else
       {
           mx_dist=max(mx_dist,i-memo[vec[i]]);
       }
   }
   cout<<mx_dist<<endl;
   
   
    return 0;
}