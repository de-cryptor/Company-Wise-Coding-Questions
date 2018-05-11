/* 
    @Author - Jatin Goel
    @Institute - IIIT Allahabad
    Hardwork definitely pays off. 
    There is no substitute of hardwork.
    There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
#define  LL long long
#define F first
#define S second
#define PII pair<int,int>

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
        	cin >> arr[i];
        }
        int C[3] = {0, 0, 0};
 
	    for (int i = 0; i < n; ++i)
	        ++C[arr[i] % 3];

	    cout << C[1] * C[2] + C[0] * (C[0] - 1) / 2 +
	           C[0] * (C[0] - 1) * (C[0] - 2) / 6 +
	           C[1] * (C[1] - 1) * (C[1] - 2) / 6 +
	           C[2] * (C[2] - 1) * (C[2] - 2) / 6 +
	           C[0] * C[1] * C[2] << endl;

	}
}
