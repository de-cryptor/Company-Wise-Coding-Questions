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
		int n,m;
		string s1,s2;
		cin >> s1;
		s2 = s1;
		reverse(s2.begin(),s2.end());
		n = s1.size();
		m = n;
		int dp[m+1][n+1];
		for(int i=0;i<=m;i++)
		{
			for(int j=0;j<=n;j++)
			{
				if(i==0 || j==0)
					dp[i][j] = 0;
				else if(s1[i-1] == s2[j-1])
					dp[i][j] = 1+ dp[i-1][j-1];
				else
					dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
			}
		}
		cout << dp[m][n] << endl;
	}
}