#include<bits/stdc++.h>
using namespace std;

	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    
	    /*
	        for(int i=0;i<n-1;i++)
	        {
	            for(int j=i+1;j<n;j++)
	            {
	                if(arr[i]+arr[j]==x)          //T.C.- O(N^2)  , S.C-O(1)
	                {
	                    return true;
	                }
	            }
	        }
	        return false; */
	        
	        
	        unordered_map<int,int>memo;
	        for(int i=0;i<n;i++)
	        {
	            if(memo.find(x-arr[i])!=memo.end())
	            {                                        //T.C.- O(n) S.C- O(n)
	                return true;
	            }
	            memo[arr[i]]=i;
	        }
	        
	        return false;
	        
	        
	}
	
	

int main()
{
      int n=5;int x=9;
       
        int arr[5]={2,4,5,1,7};
        
        cout<<hasArrayTwoCandidates(arr,n,x);
    return 0;
}