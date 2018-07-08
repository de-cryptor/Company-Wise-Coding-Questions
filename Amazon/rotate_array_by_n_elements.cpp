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
        int n,d;
        cin >> n >> d;
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        reverse(a,a+d);
        reverse(a+d,a+n);
        reverse(a,a+n);
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
	return 0;
}