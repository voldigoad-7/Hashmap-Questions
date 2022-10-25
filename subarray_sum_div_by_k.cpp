#include<bits/stdc++.h>
using namespace std;
int subarray_sum_div_by_k(vector<int>vec,int k)
{
    unordered_map<int,int>memo;
    int ps=0;
    int cnt=0;
    memo[0]=1;
    for(int i=0;i<vec.size();i++)
    {
        ps+=vec[i];
        int r=ps%k;
        if(r<0) r+=k;
        if(memo.find(r)!=memo.end())
        {
            cnt+=memo[r];
        }
        memo[r]++;
    }
    return cnt;
    
}
int main()
{
    vector<int>vec={4,5,0,-2,-3,1};
    int k=5;
    cout<<subarray_sum_div_by_k(vec,k);
}