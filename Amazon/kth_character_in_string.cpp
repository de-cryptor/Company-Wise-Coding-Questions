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
		int m,k,n;
		cin >> m >> k >> n;
		string temp = "";
		while(m)
		{
			if(m%2)
				temp = '1' + temp;
			else
				temp = '0' + temp;
			m /= 2;
		}
		string s;
		while(n--)
		{
			s = "";
			for(int i=0;i<temp.size();i++)
			{
				if(temp[i] == '0')
					s = s + "01";
				else
					s = s + "10";
			}
			temp = s;
		}
		cout << s[k] << endl;
	}
}
