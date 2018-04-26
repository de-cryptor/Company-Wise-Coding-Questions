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
		set<int> s;
		int a[n+5];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i] < 0)
				s.insert(a[i]);
		}
		sort(a,a+n);
		int flag = 0;
		for(int i=0;i<n;i++)
		{
			if(a[i] > 0)
			{
				if(s.find(-a[i]) != s.end())
				{
					cout << -a[i] << " " << a[i] << " ";
					flag = 1;
				}
			}
		}
		if(!flag)
		    cout << flag << endl;
	    else
		    cout << endl;
	}
}
