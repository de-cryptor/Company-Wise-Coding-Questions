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

int ctr = 0;
void bfs(int m,int n ,int num)
{
	queue<int > q;
	q.push(num);

	while (!q.empty())
	{
		num = q.front();
		q.pop();

		if (num <= n)
		{
			if(num >=m)
				ctr++;
			int last_dig = num % 10;

			if (last_dig == 0)
				q.push((num*10) + (last_dig+1));

			else if (last_dig == 9)
				q.push( (num*10) + (last_dig-1) );

			else
			{
				q.push((num*10) + (last_dig-1));
				q.push((num*10) + (last_dig+1));
			}
		}
	}
}
void printJumping(int m,int n)
{
	if(m == 0)
	{
	    ctr++;
	}
	for (int i=1; i<=9 && i<=n; i++)
	bfs(m,n, i);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m,n;
		cin >> m >> n;
		printJumping(m,n);
		cout << ctr <<endl;
		ctr = 0;
	}
	return 0;
}
