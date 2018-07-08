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
        int n,m;
        cin >> n >> m;
        int a[n+5],b[m+5];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int j=0;j<m;j++)
        {
            cin >> b[j];
        }
        int k = 0,carry=0;
        string ans = "";
        while(k < min(n,m))
        {
            int p = a[n-k-1];
            int q = b[m-k-1];
            k++;
            int sum = ((p+q+carry))%10;
            char c = ('0' + sum);
            ans = ans + c;
            carry = (p+q+carry)/10;
        }
        while(k<n)
        {
            int p = a[n-k-1];
            k++;
            int sum = ((p+carry))%10;
            char c = ('0' + sum);
            ans = ans + c;
            carry = (p+carry)/10;
        }
        while(k<m)
        {
            int q = b[m-k-1];
            k++;
            int sum = ((q+carry))%10;
            char c = ('0' + sum);
            ans = ans + c;
            carry = (q+carry)/10;
        }
        if(carry > 0)
        {
            char c = '0' + carry;
            ans = ans + c;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        
    }
	return 0;
}