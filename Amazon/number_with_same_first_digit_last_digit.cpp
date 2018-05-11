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

int first_digit(int x)
{
	while(x>=10)
	{
		x= x/10;
	}
	return x;
}
int ans(int x)
{
    if(x < 10)
    {
        return x;
    }
	int a = 0;
	a = a + 9 + x/10;
	int last = x%10;
	int first = first_digit(x);
	if(last < first)
		a--;
	return a;

}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int l,r;
		cin >> l >>r;
		int lans = ans(l-1);
		int rans = ans(r);
		cout << abs(rans-lans) << endl;

	}
}