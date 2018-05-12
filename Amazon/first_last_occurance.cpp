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

int n;
int first(int a[],int l,int h,int x)
{
	if(h>=l)
	{
		int mid = l + (h-l)/2;
		if((mid == 0 || x > a[mid-1]) && a[mid] == x)
		{
			return mid;
		}
		else if(a[mid] < x)
			return first(a,mid+1,h,x);
		else
			return first(a,l,mid-1,x);
	}
	return -1;
}
int last(int a[],int l,int h,int x)
{
	if(h>=l)
	{
		int mid = l + (h-l)/2;
		if((mid == n-1 || x < a[mid+1]) && a[mid] == x  )
		{
			return mid;
		}
		else if(a[mid] > x)
			return last(a,l,mid-1,x);
		else
			return last(a,mid+1,h,x);
	}
	return -1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		int x;
		cin >> x;
		int f = first(a,0,n-1,x);
		int l = last(a,0,n-1,x);
		if(f != -1)
			cout << f << " " << l << endl;
		else
			cout << -1 << endl; 
	}
}