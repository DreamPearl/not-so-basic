/* Array Prefix Sum
 
Input: [10, 20, 30, 100, 200]
Output: [10, 30, 60, 160, 360]
Ask Q queries and for each query find prefix sum for the first X numbers?
 
Time Complexity: O(N+Q) 
Space Complexity: O(N)
 
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,ele,q,sum=0;
	vector<int> v_in;
	vector<int> v_result;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v_in.push_back(ele);
	}
	for(auto &ele:v_in)
		{
			sum=sum+ele;
			v_result.push_back(sum);
		}
	cin>>q;
	for(int i=0;i<q;i++)
	{   
	    int x;
	    cin>>x;
	    cout<<v_result[x]<<"\n";
	}
	return 0;
}
