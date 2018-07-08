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
        for(int i=0;i<n-1;i++)
        {
            if(a[i] > 0 && a[i] == a[i+1])
            {
                a[i] = 2*a[i];
                a[i+1] = 0;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i])
                cout << a[i] << " ";
            else
                cnt++;
        }
        for(int i=0;i<cnt;i++)
        {
            cout << 0 << " ";
        }
        cout << endl;
    }
	return 0;
}