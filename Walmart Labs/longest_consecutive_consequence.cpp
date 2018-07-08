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
        sort(a,a+n);
        int ans = 1 ,ctr = 1;
        for(int i=1;i<n;i++)
        {
            if(a[i] == a[i-1]+1)
            {
                ctr++;
            }
            else
            {
                ctr = 1;
            }
            ans = max(ans,ctr);
        }
        cout << ans << endl;
    }
	return 0;
}