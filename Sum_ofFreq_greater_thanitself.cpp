#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>vec={ 1, 2, 3, 3, 2, 3, 2, 3, 3 };
 unordered_map<int,int>memo;
int sum=0;
 for(int i=0;i<vec.size();i++)
 {
 	memo[vec[i]]++;
 }
for(auto x:memo)
{
	if(x.second>=x.first)
	{
		sum+=x.first;
	}
}
cout<<sum<<" ";
return 0;
}
