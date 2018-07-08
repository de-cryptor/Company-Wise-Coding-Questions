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
        int a[n+5],b[m+5],c[n+m+5];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin >> b[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        sort(b,b+m);
        reverse(b,b+m);
        int i=0,j=0,k=0;
        while(i<n && j<m)
        {
            if(a[i] >= b[j])
            {
                c[k] = a[i];
                k++;
                i++;
            }
            else
            {
                c[k] = b[j];
                k++;
                j++;
            }
        }
        while(i<n)
        {
            c[k] = a[i];
            k++;
            i++;
        }
        while(j<m)
        {
            c[k] = b[j];
            k++;
            j++;
        }
        for(int p=0;p<k;p++)
        {
            cout << c[p] << " ";
        }
        cout << endl;
    }
	return 0;
}