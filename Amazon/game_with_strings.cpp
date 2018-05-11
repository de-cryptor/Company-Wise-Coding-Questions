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
		string s;
		cin >> s;
		int h[26]={0};
		for(int i=0;i<s.size();i++)
			h[s[i]-'a']++;
		priority_queue<int> pq;
		for(int i=0;i<26;i++)
			pq.push(h[i]);
		int k;
		cin>>k;
		int ans = 0;
		while(k--)
		{
			if(!pq.empty())
			{
				int tmp = pq.top();
				tmp = tmp -1;
				pq.pop();
				pq.push(tmp);
			}
		}
		while(!pq.empty())
		{
			int tmp = pq.top();
			pq.pop();
			ans += tmp*tmp;
		}
		cout << ans << endl;
	}
}