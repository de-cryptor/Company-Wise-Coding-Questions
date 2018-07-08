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
        map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            string s;
            cin >> s;
            mp[s]++;
        }
        vector< pair<int,string> > v;
        for(auto it = mp.begin();it != mp.end();it++)
        {
            v.push_back({it->second,it->first});
        }
        sort(v.rbegin(),v.rend());
        cout << v[1].second << endl;
    }
	return 0;
}