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
        int sum;
        cin >> sum;
        int a[n+2];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        int ans = 0;
        for(int i=0;i<n-2;i++)
        {
            int p=i,q=i+1,r=n-1;
            while(q<r)
            {
                if(a[p]+a[q]+a[r] >= sum)
                {
                    r--;
                }
                else
                {
                    ans += r - q;
                    q++;
                    
                }
            }
        }
        cout << ans << endl;
    }
	return 0;
}