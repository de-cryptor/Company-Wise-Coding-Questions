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
        int n = s.size();
        int idx = -1,ev=100;
        for (int i=0;i<n;i++)
        {
            if((s[i]-'0')%2 == 0)
            {
                ev = s[i]-'0';
                idx = i;
            }
            if(ev < s[n-1] - '0')
            {
                idx = i;
                break;
            }
        }
        if(idx != -1)
            swap(s[idx],s[n-1]);
        cout << s << endl;
    }
	return 0;
}