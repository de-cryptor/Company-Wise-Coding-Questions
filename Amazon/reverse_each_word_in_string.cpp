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
		int n = s.size();
		stack<char> st;
		for(int i=0;i<n;i++)
		{
			if(s[i] == '.')
			{
				while(!st.empty())
				{
					cout << st.top();
					st.pop();
				}
				cout << '.' ;
			}
			else
				st.push(s[i]);
		}
		while(!st.empty())
		{
			cout << st.top() ;
			st.pop();
		}
		cout << endl;
	}
}
