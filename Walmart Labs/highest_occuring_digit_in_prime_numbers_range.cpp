/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1000005][10];
int main() 
{
    int t,n=1e6+5;
    cin >> t;
    int digits[10] = {0};
    int prime[n+5];
    memset(prime,0,sizeof(n));
    for(int i=2;i*i <= n;i++)
    {
        for(int j=i+i;j<n;j+=i)
        {
            prime[j] = 1;
        }
    }
    memset(dp,0,sizeof(dp));
    for(int i=2;i<n;i++)
    {
        int p = i;
        if(prime[i] == 0)
        {
            while(p)
            {
                dp[i][p%10]++;
                p /= 10;
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        for(int j=1;j<=9;j++)
        {
            dp[i][j] += dp[i-1][j];
        }
    }
    
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        int mx = -1,ans = -1;
        for(int i=1;i<=9;i++)
        {
            if(dp[r][i] - dp[l-1][i] >= mx)
            {
                mx = dp[r][i] - dp[l-1][i];
                ans = i;
            }
            if(mx == 0)
                ans = -1;
            
        }
        cout << ans << endl;
    }
	return 0;
}