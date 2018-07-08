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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(s.length()==0||s[0]=='0'){
            int ans = 0;
            cout << ans << endl;
        }
        else
        {
            int dp[n+5];
            memset(dp,0,sizeof(dp));
            dp[0]=1;
            dp[1]=1;
            for(int i=2;i<=n;i++)
            {
                if(s[i-1]>='1'&&s[i-1]<='9')
                {
                    dp[i]+=dp[i-1];
                }
                if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]>='0'&&s[i-1]<='6'))
                {
                    dp[i]+=dp[i-2];
                }
            }
            cout <<  dp[n] << endl;
        }
        
    }
	return 0;
}