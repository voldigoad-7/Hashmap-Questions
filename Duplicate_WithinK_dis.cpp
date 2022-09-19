#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec={1, 2, 3, 4, 5}; 
    int k= 3;
    unordered_map<int,int>memo;
    for(int i=0;i<vec.size();i++)
    {
        if(memo.find(vec[i])==memo.end())
        {
            memo[vec[i]]=i;
        }
        else 
        { 
            if(i-memo[vec[i]]<=k)
            {
              cout<<"true";
              return 0;
            }
            else
            {
                   continue;
            }
        }
    }
    cout<<"false";
return 0;
}
