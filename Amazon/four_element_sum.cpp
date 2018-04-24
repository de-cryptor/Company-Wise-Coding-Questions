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
		int sum,flag=0 ;
		cin >> sum;
		sort(a,a+n);
		for(int i=0;i<n-3;i++)
		{
			for(int j=i+1;j<n-2;j++)
			{
				int l,r,curr_sum=0;
				l=j+1;
				r=n-1;
				while(l<r)
				{
					if(a[i]+a[j]+a[l]+a[r] == sum)
					{
						cout << 1 << endl;
						flag =1;
						break;
					}
					else if(a[i]+a[j]+a[l]+a[r] < sum)
						l++;
					else
						r--;
				}
				if(flag)
					break;
			}
			if(flag)
				break;
		}
		if(!flag)
			cout << 0 << endl;
	}
}