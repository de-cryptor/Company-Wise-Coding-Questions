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

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int l,r;
		cin >> l >> r;
		for(int i=l;i<=r;i++)
		{
			int h[10];
			int flag =1;
			memset(h,0,sizeof(h));
			int num = i;
			while(num>0)
			{
				h[num%10]++;
				num = num/10;
			}
			for(int j=0;j<10;j++)
			{
				if(h[j]>1)
				{
					flag = 0;
					break;
				}
			}
			if(flag)
				cout << i << " ";
		}
		cout << endl;
	}
}