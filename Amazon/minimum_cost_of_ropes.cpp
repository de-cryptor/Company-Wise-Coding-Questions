/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+5];
        priority_queue<int ,vector<int> , greater<int> > pq;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            pq.push(a[i]);
        }
        int ans = 0;
        while(1)
        {
            int a=0,b=0;
            if(!pq.empty())
            {
                a = pq.top();
                pq.pop();
            }
            if(!pq.empty())
            {
                b = pq.top();
                pq.pop();
            }
            if(!pq.empty())
            {
                pq.push(a+b);
            }
            ans += a+b;
            if(pq.empty())
            {
                break;
            }
        }
        cout << ans << endl;

    }
	return 0;
}