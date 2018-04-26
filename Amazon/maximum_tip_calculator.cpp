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
		int n,x,y;
		cin >> n >> x >> y;

		int a[n+5],b[n+5];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);

		for(int i=0;i<n;i++)
			scanf("%d",&b[i]);

		vector < vector<int> > v;
		int c1=0,c2=0,ans=0;
		for(int i=0;i<n;i++)
		{
			if(a[i] >= b[i])
			{
				ans += a[i];
				c1++;
			}
			else
			{
				ans += b[i];
				c2++;
			}
		}
		for(int i=0;i<n;i++)
		{
			vector<int> temp;
			temp.push_back(abs(b[i]-a[i]));
			if(a[i] >= b[i])
				temp.push_back(1);
			
			else
				temp.push_back(2);
			temp.push_back(i);
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		if(c1 > x)
		{
			int diff = c1 - x;
			for(int i=0;i<n && diff;i++)
			{
				if(v[i][1] == 1)
				{
					ans -= a[v[i][2]];
					ans += b[v[i][2]];
					diff--;
				}
			}
		}
		if(c2 > y)
		{
			int diff = c2 - y;
			for(int i=0;i<n && diff;i++)
			{
				if(v[i][1] == 2)
				{
					ans -= b[v[i][2]];
					ans += a[v[i][2]];
					diff--;
				}
			}
		}
		cout << ans << endl;
	}
}
