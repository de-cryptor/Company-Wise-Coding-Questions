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
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int flg=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i]) != mp.end() && mp[s[i]] > 1)
            {
                cout << s[i] << endl;
                flg = 1;
                break;
            }
        }
        if(!flg)
        {
            cout << -1 << endl;
        }
        
    }
	return 0;
}