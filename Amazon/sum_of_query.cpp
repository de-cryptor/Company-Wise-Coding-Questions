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
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        int presum[n+5];
        presum[1] = a[1];
        for(int i=2;i<=n;i++)
        {
            presum[i] = presum[i-1] + a[i];
        }
        int q;
        cin >> q;
        while(q--)
        {
            int l,r;
            cin >> l >> r;
            int ans = presum[r] - ( l>1 ? presum[l-1] : 0);
            cout << ans << " ";
        }
        cout << endl;
    }
	return 0;
}