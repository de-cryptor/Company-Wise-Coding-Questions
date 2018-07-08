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
        queue<string> q;
        q.push("1");
        while(n)
        {
            string tmp = q.front();
            cout << tmp << " ";
            n--;
            q.pop();
            q.push(tmp+'0');
            q.push(tmp+'1');
        }
        cout << endl;
    }
	return 0;
}