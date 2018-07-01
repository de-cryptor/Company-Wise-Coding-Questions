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
        int n,m;
        cin >> n >> m;
        int mat[n+2][m+2];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> mat[i][j];
            }
        }
        int target;
        cin >> target;
        int i=0,j=m-1;
        int flag = 0;
        while(i<n && j>=0)
        {
            if(mat[i][j] == target)
            {
                flag =1;
                break;
            }
            else if(mat[i][j] > target)
                j--;
            else
                i++;
        }
        cout << flag << endl;
    }
	return 0;
}