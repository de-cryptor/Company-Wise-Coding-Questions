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
        long long ans,b,x;
        cin >> b;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            if(b == x)
            {
                b = 2*b;
            }
        }
        cout << b << endl;
    }
	return 0;
}