#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int x,vector<pair<int,int>>&p)
    {
      
       unordered_map<int,int>memo;
       
       vector<int>arr(A,A+N);
       
       for(auto c:arr)
       {
           memo[c]++;
       }
     
	        for(int i=0;i<M;i++)
	        {
	           unordered_map<int, int>:: iterator z;
	            z=memo.find(x-B[i]);
	            if(z!=memo.end())
	            {
	               p.push_back({z->first,B[i]});
	            }

	        }
	        sort(p.begin(),p.end());
	        
	        
	       return p;
       
    }
	
	

int main()
{
          int N=5;
	      int M=5;
	      int X=9;
	   int A[5] = {1, 2, 4, 5, 7};
       int B[5] = {5, 6, 3, 4, 8};
       vector<pair<int,int>>p;
       allPairs(A,B,N,M,X,p);

       int sz=p.size();
       for(int i=0;i<sz;i++){
                if(i==0)
                cout<<p[i].first<<" "<<p[i].second;
                else
                cout<<", "<<p[i].first<<" "<<p[i].second;
            }
            cout<<endl;

    return 0;
}