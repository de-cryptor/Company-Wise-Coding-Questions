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
		int op=0,cl=0,i,flag =0;
		for(i=0;i<s.size();i++)
		{
			if(s[i] == ')')
				cl++;
		}
		for(i=0;i<s.size();i++)
		{
			if(s[i]== ')')
				cl--;
			else
				op++;
			if(cl == op)
			{
				flag = 1;
				cout << i + 1 << endl;
				break;
			}
		}
		if(!flag)
			cout << -1 << endl;
	}
}