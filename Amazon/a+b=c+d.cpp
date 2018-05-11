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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		map<int,int> mp;
		int flag = 0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int sum = a[i] + a[j];
				if(mp.find(sum) == mp.end())
				{
					mp[sum] = 1;
				}
				else
				{
					flag = 1;
					break;
				}
			}
			if(flag)
				break;
		}
		cout << flag << endl;

	}
}