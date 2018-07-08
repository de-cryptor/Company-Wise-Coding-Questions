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
        long long k,n;
        cin >> n ;
        k = log2(n) + 1;
        int flg=1;
        long long p = k/2;
        k--;
        for(int i=0;i<p;i++)
        {
            long long  x = (n>>k) & 1;
            long long y = (n>>i) & 1;
            if(x != y)
            {
                flg = 0;
                break;
            }
            k--;
        }
        cout << flg << endl;
    }
	return 0;
}