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
        long long n;
        cin >> n;
        string ans = "";
        while(n > 0)
        {
            int r = n%26;
            r = r==0 ? 25 : r-1;
            n = n%26 ==0 ? n = n/26 - 1 : n = n/26;
            char c = 'A' + r;
            ans = c + ans;
        }
        cout << ans << endl;
    }
	return 0;
}