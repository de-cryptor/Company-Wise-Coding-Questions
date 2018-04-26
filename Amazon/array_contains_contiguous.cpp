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
		set<int> s;
		for(int i=0;i<n;i++)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		set<int> :: iterator it1,it2;
		it1 = s.begin();
		it2 = s.end();
		it2--;
		int size = s.size();
		if((*it2) - (*it1) == size-1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
