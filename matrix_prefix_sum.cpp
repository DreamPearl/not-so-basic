/* 
Matrix Prefix Sum
----------------------------
Sample Input
Matrix Sum : A
  1   2   3   4
 10  20  30  40
100 200 300 400
Sample Output:
  1   3   6   10
 11  33  66  110
111 333 666 1110        */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> v;
	int n,m,ele;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ele;
			v[i][j].push_back(ele);
		}
	}
	int x,y,sum=0,final_sum;
	vector<vector<int>> v_new;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int k=i;k>=0;k--)
			{
				sum=sum+v[k][j];
			}
			if(j!=0)
			{
				final_sum=sum+v_new[i][j-1];
				
			}
			else
			{
				final_sum=sum;
			}
			v_new[i][j].push_back(final_sum);
		}
	}
	cin>>x>>y;
	cout<<v_new[x][y]<<"\n";

	return 0;
}
