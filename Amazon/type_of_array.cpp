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
		int i;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		int f = 0,max = -1,type,ctr1=0,ctr2=0;
		for(i=0;i<n;i++)
		{
			if(a[i] > max)
				max = a[i];
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i] > a[i+1])
				ctr1++;
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i] < a[i+1])
				ctr2++;
		}
		if(ctr1 == n-1)
			type = 2;
		else  if(ctr1 == n-2)
			type = 3;

		if(ctr2 == n-1)
			type = 1;
		else if (ctr2 == n-2)
			type = 4;
		cout << max << " " << type << endl;
	}
}