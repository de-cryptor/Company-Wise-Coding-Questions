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
		int n;
		cin >> n;
		int cost[n+5];
		for(int i=0;i<n;i++)
		{
			cin >> cost[i] ;
		}
		int p ;
		cin >> p;
		LL ans = cost[0];
		int curr = 1;
		for(int i=1;i<n;i++)
		{
			int diff = cost[i-1] - cost[i];
			curr += diff;
			if(curr <= 0)
			{
				ans += -curr + 1;
				curr = 1;
			}

		}
		cout << ans*p << endl;
	}
}
