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
        for(int i=0;i<n;i++)
        {
        	cin >> a[i];
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
        	int freq = (i+1)*(n-i);
        	if(freq%2 == 1)
        		res = res^a[i];
        }  
        cout << res << endl;
    }
	return 0;
}