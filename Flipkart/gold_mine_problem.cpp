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
    int dp[100][100]={0};
    while(t--)
    {
        int m,n;
        cin >> m >> n;
        int mine[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> mine[i][j];
                dp[i][j] = 0;
            }
        }
        for(int i=0;i<m;i++)
        {
            dp[i][0] = mine[i][0];
        }
        for(int j=1;j<n;j++)
        {
            for(int i=0;i<m;i++)
            {
                int a,b,c;
                if(i-1 >= 0)
                {
                    a = dp[i-1][j-1];
                }
                b = dp[i][j-1];
                if(i+1 < m)
                {
                    c = dp[i+1][j-1];
                }
                dp[i][j] = mine[i][j] + max(a,max(b,c));
            }
        }
        int ans = -1;
        for(int i=0;i<m;i++)
        {
            ans = max(ans,dp[i][n-1]);
        }
        cout << ans << endl;
    }
	return 0;
}