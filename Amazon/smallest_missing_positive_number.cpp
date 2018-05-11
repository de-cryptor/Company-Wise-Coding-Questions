/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
#define  LL long long
#define F first
#define S second
#define PII pair<int,int>


int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ctr=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        int flag = 0;
        for(int i=0;i<n-1;i++)
        {
            if((a[i] <= 0 )&& (a[i+1] > 0 )&&( a[i+1] != 1))
            {
                cout << 1 << endl;
                flag = 1;
                break;
            }
            else if((a[i] > 0) && (a[i+1] == a[i]))
            {
                continue;
            }
            else if((a[i] > 0) && (a[i+1] != a[i] + 1))
            {
                cout << a[i] + 1 << endl;
                flag = 1;
                break;
            }

        }
        if(n==1)
        {
            if(a[n-1] == 1)
            cout << 2 << endl;
            else
            cout << 1 << endl;
        }
        else if(!flag)
            cout << a[n-1] + 1 << endl;
    }
}