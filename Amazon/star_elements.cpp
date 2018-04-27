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
		int a[n+5];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(n==1)
		{
		    cout << a[0] << endl;
		    cout << a[0] << endl;
		    continue;
		}
		int L[n+5];
		int R[n+5];
		L[0] = a[0];
		for(int i=1;i<n;i++)
			L[i] = max(a[i],L[i-1]);

		R[n-1] = a[n-1];
		for(int i=n-2;i>=0;i--)
			R[i] = max(a[i],R[i+1]);

		for(int i=0;i<n-1;i++)
		{
			if(a[i] > R[i+1])
				cout << a[i] << " ";
		}
		cout << a[n-1] << endl;
		int flag = 0;
		if(a[0] > R[1])
		{
			cout << a[0] << " ";
			flag = 1;
		}
		for(int i=1;i<n-1;i++)
		{
			if(a[i] > L[i-1] && a[i] > R[i+1])
			{
				cout << a[i] << " ";
				flag = 1;
			}
		}
		if(a[n-1] > L[n-2])
		{
			cout << a[n-1] << endl;
			flag = 1;
		}
		else if (!flag)
			cout << -1 << endl;
		else
		    cout << endl;

	}
}
