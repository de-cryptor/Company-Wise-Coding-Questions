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
	string s;
	getline(cin,s);
	while(t--)
	{
		string s;
		getline(cin,s);
		string temp;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>= '0' && s[i] <= '9')
				temp.push_back(s[i]);
			else if(s[i] >= 'a' && s[i] <= 'z')
				temp.push_back(s[i]);
			else if(s[i] >= 'A' && s[i] <= 'Z')
				temp.push_back(s[i] + 32);
		}
		int n = temp.size();
		int flag = 1;
		for(int i=0;i<n/2;i++)
		{
			if(temp[i] != temp[n-i-1])
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
