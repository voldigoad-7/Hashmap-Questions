#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	
	vector<int>vec1={10, 5, 2, 23, 19};
	vector<int>vec2={19, 5, 3};
	unordered_map<int,int>memo;
	for(auto x:vec1)
	{
		memo[x]++;
	}
	for(int i=0;i<vec2.size();i++)
	{
		if(memo[vec2[i]]!=1)
		{
			cout<<"NO SUBSET";
			return 0;
		}
	}
	cout<<"IS SUBSET";
	return 0;
}