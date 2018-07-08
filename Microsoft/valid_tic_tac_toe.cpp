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
        char board[3][3];
        int x=0,o=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin >> board[i][j];
                if(board[i][j] == 'X')
                    x++;
                else
                    o++;
            }
        }
        int flag = 0;
        map<char,int> win;
        if(board[0][0] == board[0][1] && board[0][1] == board[0][2])
            win[board[0][0]]++;
            
        if(board[1][0] == board[1][1] && board[1][1] == board[1][2])
            win[board[1][0]]++;
            
        if(board[2][0] == board[2][1] && board[2][1] == board[2][2])
            win[board[2][0]]++;
            
        if(board[0][0] == board[1][0] && board[1][0] == board[2][0])
            win[board[0][0]]++;
            
        if(board[0][1] == board[1][1] && board[1][1] == board[2][1])
            win[board[0][1]]++;
            
        if(board[0][2] == board[1][2] && board[1][2] == board[2][2])
            win[board[0][2]]++;
            
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
            win[board[0][0]]++;
            
        if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
            win[board[0][2]]++;

        if( win.size() > 1 || abs(x-o) > 1 || o > x || win['O'] > 0)
            cout << "Invalid" << endl;
        
        else
            cout << "Valid" << endl;
    }
	return 0;
}