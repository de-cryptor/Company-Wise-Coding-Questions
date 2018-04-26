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
		int L,R;
		cin >> L >> R;
		int bits[R+5];
		bits[0] = 0;
		for(int i=1;i<=R;i++)
		{
			bits[i] = bits[i/2] + i%2;
		}
		int n = 10005;
		bool prime[n+1];
		memset(prime, true, sizeof(prime));
		prime[1] = false;
		prime[0] = false;
	    
	    for (int p=2; p*p<=n; p++)
	    {
	        if (prime[p] == true)
	        {
	            for (int i=p*2; i<=n; i += p)
	                prime[i] = false;
	        }
	    }
	    
		int ans = 0;
		for(int i=L;i<=R;i++)
		{
			ans += prime[bits[i]] ? 1 : 0;
		}
		cout << ans << endl;
	}
}
