/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
#define  LL long long
#define F first
#define S second
#define PII pair<int,int>

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,r,c,mid;
		cin >> n >> r >> c;
		float a[1001][1001];
		mid = 500;
		for(int i=1;i<=1000;i++)
		{
			for(int j=1;j<=1000;j++)
			{
			    a[i][j] = -1;
			}
		}
		a[1][mid] = n;
		for(int i=1;i<=1000;i++)
		{
			for(int j=1;j<=1000;j++)
			{
				if(a[i][j] != -1 && a[i][j] > 1)
				{
					if(a[i+1][j-1] == -1)
						a[i+1][j-1] = 0;
					if(a[i+1][j+1] == -1)
						a[i+1][j+1] = 0;
					a[i+1][j-1] += (a[i][j] - 1)/2.0;
					a[i+1][j+1] += (a[i][j] - 1)/2.0;
					a[i][j] = 1; 
				}
				else if(a[i][j] != -1)
				{
					if(a[i+1][j-1] == -1)
						a[i+1][j-1] = 0;
					if(a[i+1][j+1] == -1)
						a[i+1][j+1] = 0;
				}
			}
		}
		int ctr = 0;
		float ans=0;
		for(int i=1;i<=1000;i++)
		{
			if(a[r][i] != -1)
			{
				ctr++;
				if(ctr == c)
				{
					ans = a[r][i];
					break;
				}
			}
		}
		cout << fixed << setprecision(6)<< ans << endl;
		
	}
}