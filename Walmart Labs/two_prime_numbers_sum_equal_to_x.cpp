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
        int prime[n+5];
        memset(prime,0,sizeof(prime));
        for(int i=2;i*i <= n;i++)
        {
            for(int j = 2*i;j<=n;j+=i)
            {
                prime[j] = 1;
            }
        }
        vector<int> primes;
        int flag = 0,ans;
        for(int i=2;i<=n;i++)
        {
            if(prime[i]==0)
            {
                primes.push_back(i);
                if(n/2 == i)
                {
                    ans = i;
                }
            }
            
        }
        int i=0,j=primes.size()-1;
        while(i<j)
        {
            if(primes[i] + primes[j] == n)
            {
                cout << primes[i] << " " << primes[j] << endl;
                flag = 1;
                break;
            }
            if(primes[i] + primes[j] < n)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        if(flag == 0)
        {
            cout << ans << " " << ans << endl;
        }
    }
	return 0;
}