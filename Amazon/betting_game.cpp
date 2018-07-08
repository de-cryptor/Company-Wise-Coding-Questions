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
        int curr_bet = 1;
        string S;
        cin >> S;
        int sum = 4;
        for(int i=0;i<S.size();i++)
        {
            if(S[i] == 'W')
            {
                sum += curr_bet;
                curr_bet = 1;
            }
            else
            {
                sum -= curr_bet;
                curr_bet *= 2;
            }
            if(curr_bet > sum && i != S.size()-1)
            {
                sum = -1;
                break;
            }
        }
        cout << sum << endl;
    }
	return 0;
}