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
        int ans = s[0] - '0';
        char op;
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == '0' || s[i] == '1')
            {
                int k = s[i] - '0';
                if(op == 'A')
                    ans = ans&k;
                if(op == 'B')
                    ans = ans|k;
                if(op == 'C')
                    ans = ans^k;
            }
            else
            {
                op = s[i];
            }
        }
        cout << ans << endl;
    }
	return 0;
}