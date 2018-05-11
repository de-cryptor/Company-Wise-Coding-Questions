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
			cin >> a[i];
		int one =0,ans=-1,ctr,zeros=0,flag=0;
		for(int i=0;i<n;)
		{
			if(a[i]==1)
				one =1;
			while(i<n && a[i] == 1)
				i++;
			while(i<n && a[i] == 0)
			{
				i++;
				zeros++;
			}
			if(i==n && one==0)
			{
				cout << -1 << endl;
				flag = 1;
			}

			if(i<n && one == 1)
			{
				if(zeros %2==0)
					ctr = zeros/2;
				else
					ctr = (zeros+1)/2 ;
				zeros = 0;
			}
			else
			{
				ctr = zeros;
				zeros=0;
			}
			ans = max(ans,ctr);
			
		}
		if (!flag)
		{
		    cout << ans << endl;
		}
	}
}