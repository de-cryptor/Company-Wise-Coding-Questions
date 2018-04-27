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
		string s,r;
		cin >> s >> r;
		int m=s.size(),n=r.size();
		map<char,int> mp;
		for(int i=0;i<m;i++)
			mp[s[i]] = 1;
		int found = 0;
		for(int i=0;i<n;i++)
		{
			if(mp.find(r[i]) != mp.end())
			{
				found = 1;
				break;
			}
		}
		cout << found << endl;
	}
}
