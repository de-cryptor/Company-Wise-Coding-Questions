/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void dfs(int A[100][100], int N, int M,int visited[100][100],int p,int q)
{
    visited[p][q] = 1;
    cnt++;
    int dir[8][2] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
    for(int i=0;i<8;i++)
    {
        int x = p + dir[i][0];
        int y = q + dir[i][1];
        if(x >= 0 && x < N && y >= 0 && y < M)
        {
            if(A[x][y] & !visited[x][y])
            {
                dfs(A,N,M,visited,x,y);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int visited[100][100];
        int N,M,A[100][100];
        cin >> N >> M;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                cin >> A[i][j];
            }
        }
        int max_area = 0 ;
        memset(visited,0,sizeof(visited));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(A[i][j] & !visited[i][j])
                {
                    cnt = 0;
                    dfs(A,N,M,visited,i,j);
                    max_area = max(max_area,cnt);
                }
            }
        }
        cout << max_area << endl;
    }
    
}