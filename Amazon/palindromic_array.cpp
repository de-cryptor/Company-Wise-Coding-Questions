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
        int l=0,r=n-1;
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        while(l<r)
        {
            if(a[l] == a[r])
            {
                l++;
                r--;
            }
            else if(a[l] < a[r])
            {
                ans++;
                a[l+1] = a[l] + a[l+1];
                l++;
            }
            else
            {
                ans++;
                a[r-1] = a[r] + a[r-1];
                r--;
            }
        }
        cout << ans << endl;
    }
	return 0;
}