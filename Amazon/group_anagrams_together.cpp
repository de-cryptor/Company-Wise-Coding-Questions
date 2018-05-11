/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
#define  LL long long
#define F first
#define S second
#define PII pair<int,int>

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<string> v;
		string s;
		for(int i=0;i<n;i++)
		{
			cin >> s;
			v.push_back(s);
		}
		map<vector<char>,int> mp;
		map<vector<char>,int> :: iterator it;
		for(int i=0;i<n;i++)
		{
			vector<char> tmp;
			for(int j=0;j<v[i].size();j++)
			{
				tmp.push_back(v[i][j]);
			}
			sort(tmp.begin(),tmp.end());
			if(mp.find(tmp) == mp.end())
				mp[tmp] = 1;
			else
				mp[tmp]++;
		}
		vector<int> ans;
		for(it=mp.begin();it!=mp.end();it++)
		{
			ans.push_back(it->second);
		}
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}