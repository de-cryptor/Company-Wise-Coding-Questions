/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
int hsh[1000005]={0};
int main() 
{
    int t;
    cin >> t;
    for(int i=1;i<=1000000;i++)
    {
        int p = i;
        while(p)
        {
            int r = p%10;
            if(!(r == 1 || r==2 || r==3))
            {
                hsh[i] = 1;
                break;
            }
            p /= 10;
        }
    }
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            if(!hsh[a[i]])
            {
                cout << a[i] << " ";
                flag = 1;
            }
        }
        if(!flag)
            cout << -1 ;
            
        cout << endl;
        
    }
	return 0;
}