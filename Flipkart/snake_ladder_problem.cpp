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
        map<int,int> moves;
        int dist[40] = {0};
        int visited[40] = {0};
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin >> a >> b;
            moves[a] = b;
        }
        queue< pair<int,int> > q;
        q.push({1,0});
        visited[1] = 0;
        int ans = 0;
        while(!q.empty())
        {
            pair<int,int> tmp = q.front();
            q.pop();
            int d = tmp.second;
            int node = tmp.first;
            if(node == 30)
            {
                ans = d;
                break;
            }
            for(int i = node+1;i<=node+6 && i<=30;i++)
            {
                if(visited[i] == 0)
                {
                    if(moves.find(i) == moves.end())
                    {
                        q.push({i,d+1});
                        visited[i] = 1;
                    }
                    else
                    {
                        q.push({moves[i],d+1});
                        visited[i] = 1;
                    }
                }
                
            }
        }
        cout << ans << endl;
    }
	return 0;
}