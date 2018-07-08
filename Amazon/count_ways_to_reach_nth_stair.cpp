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
    long long MOD = 1e9 + 7;
    long long stairs[100005];
    stairs[1] = 1;
    stairs[2] = 2;
    for(int i=3;i<=100000;i++)
    {
        stairs[i] = (stairs[i-1] + stairs[i-2])%MOD;
    }
    while(t--)
    {
        int n;
        cin >> n;
        cout << stairs[n] << endl;
    }
	return 0;
}