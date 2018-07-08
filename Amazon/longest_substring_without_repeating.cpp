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
        int hash[260]={0};
        int start = 0,ans=-1,ctr=0;
        for(int i=0;i<s.size();i++)
        {
            if(hash[s[i]] == 0)
            {
                ctr = i - start + 1;
                hash[s[i]] = 1;
            }
            else
            {
                hash[s[start]] = 0;
                i--;
                start++;
            }
            ans = max(ans,ctr);
        }
        cout << ans << endl;
    }
	return 0;
}