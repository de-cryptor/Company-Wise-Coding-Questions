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
		int num=0,max_num=-1;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] >= '0' && s[i] <= '9')
			{
				num = num*10 + s[i] - '0';
			}
			else
			{
				max_num = max(num,max_num);
				num=0;
			}

		}
		cout << max(num,max_num) << endl;
	}
}