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
		int a[n],b[n];
		int mx = -1;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			mx = max(mx,a[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
		}
		int h[100001];
		memset(h,0,sizeof(h));
		for(int i=0;i<n;i++)
		{
			h[b[i]]++;
		}
		for(int i=1;i<=mx;i++)
		{
			h[i] += h[i-1];
		}
		for(int i=0;i<n;i++)
		{
			cout << h[a[i]] ;
			if(i < n-1)
				cout << ",";
		}
		cout << endl;

	}
}