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
		int h[26];
		memset(h,0,sizeof(h));
		for(int i=0;i<s.size();i++)
		{
			h[s[i]-'a']++;
		}
		int flag = 1;
		for(int i=0;i<26;i++)
		{
			if(h[i] > s.size()/2)
				flag = 0;

		}
		cout << flag << endl;
	}
}