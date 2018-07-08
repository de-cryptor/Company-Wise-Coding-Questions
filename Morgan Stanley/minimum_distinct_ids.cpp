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
        map<int,int> mp;
        int n;
        cin >> n;
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int m;
        cin >> m;
        vector< pair<int,int> > v;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            v.push_back({it->second,it->first});
        }
        sort(v.begin(),v.end());
        int ans = 0;
        for(int i=0;i<v.size();i++)
        {
            if(m - v[i].first >= 0)
            {
                m -= v[i].first;
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << v.size() - ans << endl;
    }
	return 0;
}