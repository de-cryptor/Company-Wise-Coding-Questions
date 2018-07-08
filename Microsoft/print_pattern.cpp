/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
int flag=1;
void recur(int n,int y)
{
    cout << n << " ";
    if(n == y)
    {
        return;
    }
    if(n > 0 & flag)
        recur(n-5,y);
    else
    {
        flag = 0;
        recur(n+5,y);
    }
        
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << n << " ";
        recur(n-5,n);
        cout << endl;
        flag = 1;
    }
	return 0;
}
