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
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin >> s[i];
        }
        string query;
        cin >> query;
        int flag[n+5][20];
        memset(flag,0,sizeof(flag));
        for(int i=0;i<n;i++)
        {
            flag[i][0] = 1;
        }
        for(int i=0;i<query.size();i++)
        {
            
            set<string> ans;
            for(int j=0;j<n;j++)
            {
                if(query[i] == s[j][i] && flag[j][i])
                {
                    ans.insert(s[j]);
                    flag[j][i+1] = 1;
                }
            }
            
            if(ans.size() > 0)
            {
                for(auto k=ans.begin();k!=ans.end();k++)
                {
                    cout << *k << " ";
                }
            }
            else
                cout << 0 ;
            cout << endl;
            ans.clear();
        }
    }
	return 0;
}