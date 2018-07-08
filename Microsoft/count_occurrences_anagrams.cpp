/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
bool cmp(int hs[],int ht[])
{
    for(int i=0;i<30;i++)
    {
        if(hs[i] != ht[i])
            return false;
    }
    return true;
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,t;
        cin >> s;
        cin >> t;
        int ht[30] = {0},hs[30] = {0};
        for(int i=0;i<t.size();i++)
        {
            ht[t[i] - 'a']++;
        }
        int ans = 0;
        for(int i=0;i<t.size();i++)
        {
            hs[s[i] - 'a']++;
        }
        if(cmp(hs,ht))
            ans++;
            
        int k = t.size();
        for(int i=k;i<s.size();i++)
        {
            hs[s[i-k]-'a']--;
            hs[s[i]-'a']++;
            if(cmp(hs,ht))
                ans++;
        }
        cout << ans << endl;
        
    }
	return 0;
}