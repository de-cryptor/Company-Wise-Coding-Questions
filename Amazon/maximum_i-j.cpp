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
        int LMn[n+5];
        LMn[0] = a[0];
        for(int i=1;i<n;i++)
        {
            LMn[i] = min(a[i],LMn[i-1]);
        }
        int RMx[n+5];
        RMx[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            RMx[i] = max(a[i],RMx[i+1]);
        }
        int i=0,j=0,ans=0;
        while(i<n && j<n)
        {
            if(LMn[i] <= RMx[j])
            {
                ans = max(ans,j-i);
                j++;
            }
            else
            {
                i++;
            }
            
        }
        cout << ans << endl;
    }
	return 0;
}