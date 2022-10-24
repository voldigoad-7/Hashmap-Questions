#include<bits/stdc++.h>
using namespace std;
int min_len_subarrays(vector<int>vec,int n,int k)
{
    unordered_map<int,int>memo;
    int ps=0;
    int cnt=0;
    int minl=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ps+=vec[i];
        if(ps==k)                                       // t.c -O(n). S.C- O(n)
        {
            int start=0;
            int end=i;
            int len=end-start+1;
           minl=min(minl,len);
        }
        else if(memo.find(ps-k)!=memo.end())
        {
            int start=memo[(ps-k)]+1;
            int end=i;
            minl=min(minl,end-start+1);
        }
        memo[ps]=i;
    }
    return minl;
}
int main()
{
    int n=7;
    vector<int>vec={1, 2, 4, 3, 2, 4, 1} ;
    int k = 7;
    
    //cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     vec.push_back(x);
    // }
    
    cout<<min_len_subarrays(vec,n,k);
    return 0;
}