#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n)
{
    
   vector<bool>vis(n+1,false);
    for(int i=0;i<n;i++)
    {
        int count=1;
       
        for(int j=i+1;j<n;j++)
        {                                                 //T.C. - O(n^2) S.C. - O(1) 
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(vis[arr[i]]==false)
        {
            vis[arr[i]]=true;
        cout<<arr[i]<<" "<<count<<endl;
        }
    }
    
    
    
    
    /*
    unordered_map<int,int>memo;
    for(int i=0;i<n;i++)
    {
        memo[arr[i]]++;
    }
    
    for(auto it=memo.begin();it!=memo.end();it++)              // T.C.- O(n) , S.C.-O(n)  
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    
}


int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}