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
        int keypad[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
        string s;
        cin >> s;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            ans += keypad[s[i]-'a'] + '0';
        }
        cout << ans << endl;
        
    }
	return 0;
}