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
        int board[9][9];
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cin >> board[i][j];
            }
        }
        int row[9][10]={0},column[9][10]={0},box[9][10]={0};
	    int flag = 1;
	    for(int i = 0; i < 9 && flag; ++ i)
	    {
	        for(int j = 0; j < 9 && flag; ++ j)
	        {
	            if(board[i][j] != 0)
	            {
	                int num = board[i][j] ;
	                int k = i / 3 * 3 + j / 3;
	                if(row[i][num] || column[j][num] || box[k][num])
	                    flag = 0;
	                row[i][num] = column[j][num] = box[k][num] = 1;
	            }
	        }
	    }
	    cout << flag << endl;
    }
	return 0;
}