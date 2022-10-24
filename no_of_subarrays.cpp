#include<bits/stdc++.h>
using namespace std;

// int no_of_subarrays(vector<int>vec,int n,int k)
// {
//     int cnt=0;
//     for(int i=0;i<n;i++)
//     {
//         int cs=0;
//         for(int j=i;j<n;j++)
//         {
//             cs+=vec[j];               // t.c - O(n^2). s.c- O(1)
//             if(cs==k)
//             {
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
// }

int no_of_subarrays(vector<int>vec,int n,int k)
{
    unordered_map<int,int>memo;
    int ps=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        ps+=vec[i];
        if(ps==k)           // t.c -O(n). S.C- O(n)
        {
            cnt+=1;
        }
        else if(memo.find(ps-k)!=memo.end())
        {
            cnt+=memo[ps-k];
        }
        memo[ps]++;
    }
    return cnt;
}
int main()
{
    int n=6;
    vector<int>vec={9, 4, 20, 3, 10, 5} ;
    int k = 33;
    
    //cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     vec.push_back(x);
    // }
    
    cout<<no_of_subarrays(vec,n,k);
    return 0;
}