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

int countDigits(int n,int x)
{
	int d = 0;
	while(n>0)
	{
		if(n%10 == x)
			d++;
		n /= 10;
	}
	return d;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;

		int L,R;
		cin >> L >> R;

		int ans = 0;
		for(int i = L+1;i<R;i++)
		{
			ans += countDigits(i,x);
		}
		cout << ans << endl;
	}
	
}
