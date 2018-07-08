/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
int graph[60][60]={0};
int color[60] = {0};
int n,m,e;
bool isSafe(int v, int c)
{
    for(int i=1;i<=n;i++)
    {
        if(graph[v][i] && color[i] == c)
            return false;
    }
    return true;
}
bool graphColoring(int m,int v)
{
    if(v == n+1)
        return true;
    
    for(int i=1;i<=m;i++)
    {
        if(isSafe(v,i))
        {
            color[v] = i;
            if(graphColoring(m,v+1) == true)
                return true;
                
            color[v] = 0;
        }
    }
    return false;
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> e;
        for(int i=0;i<e;i++)
        {
            int x,y;
            cin >> x >> y;
            graph[x][y] = 1;
            graph[y][x] = 1;
        }
      
        if (graphColoring(m,1))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        memset(color,0,sizeof(color));
        memset(graph,0,sizeof(graph));
        
    }
	return 0;
}