/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,x,flag = 0;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		int l=0,r=n-1;
		while(l<r)
		{
			if(a[l]+a[r] == x)
			{
				cout << "Yes" << endl;
				flag =1;
				break;
			}
			else if(a[l]+a[r] > x)
				r--;
			else
				l++;
		}
		if(!flag)
			cout << "No" << endl;
	}
}