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
        int d[10005] = {0};
        int visited[10005] = {0};
        queue<int> q;
        q.push(1);
        while(!q.empty())
        {
            int tmp = q.front();
            q.pop();
            if(tmp == n)
            {
                cout << d[n] << endl;
                break;
            }
            if(tmp+1 <= n && visited[tmp+1] == 0)
            {
                q.push(tmp+1);
                d[tmp+1] = d[tmp] + 1;
                visited[tmp+1]  =1;
            }
            if(tmp*3 <= n && visited[3*tmp] == 0)
            {
                q.push(3*tmp);
                d[3*tmp] = d[tmp] + 1;
                visited[3*tmp] = 1;
            }
        }
    }
	return 0;
}