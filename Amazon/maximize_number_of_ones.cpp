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
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int L=0,R=0;
        int m,zc=0,maxLen=-1;
        cin >> m;
        while(R < n)
        {
            if(zc <= m)
            {
                if(a[R] == 0)
                {
                    zc++;
                }
                R++;
            }
            if(zc > m)
            {
                if(a[L] == 0)
                {
                    zc--;
                }
                L++;
            }
            maxLen = max(maxLen,R-L);
        }
        cout << maxLen << endl;
        
    }
	return 0;
}