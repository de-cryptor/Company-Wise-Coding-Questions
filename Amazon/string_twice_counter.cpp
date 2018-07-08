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
        int n;
        cin >> n;
        string s[n+5];
        map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            cin >> s[i];
            mp[s[i]]++;
        }
        int ans = 0;
        for(auto it = mp.begin(); it != mp.end();it++)
        {
            if(it->second == 2)
            {
                ans++;
            }
        }
        cout << ans << endl;
        
    }
	return 0;
}