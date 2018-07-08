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
        string s;
        cin >> s;
        int hash[260] = {0};
        int ans = 0;
        int i=0,j=0;
        while(i<s.size() && j<s.size())
        {
            if(hash[s[j]] == 0)
            {
                hash[s[j++]] = 1;
                ans = max(ans,j-i);
            }
            else
            {
                hash[s[i++]] = 0;
            }
        }
        cout <<  ans << endl;
    }
	return 0;
}