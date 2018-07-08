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
        string s,r;
        cin >> s;
        cin >> r;
        int sze = s.size();
        if(s[0] == '^')
        {
            int flag = 1;
            for(int i=1;i<s.size();i++)
            {
                if(s[i] != r[i-1])
                {
                    flag = 0;
                    break;
                }
            }
            cout << flag << endl;
        }
        
        else if(s[sze-1] == '$')
        {
            int flag = 1,rze = r.size()-1;
            for(int i=sze-2;i>=0;i--)
            {
                if(s[i] != r[rze--])
                {
                    flag = 0;
                    break;
                }
            }
            cout << flag << endl;
        }
        else
        {
            if(r.find(s) == string::npos)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }
	return 0;
}