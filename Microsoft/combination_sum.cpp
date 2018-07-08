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
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int sum;
        cin >> sum;
        map< vector<int> , int > mp;
        queue< pair < vector<int> , int > > q;
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            v.push_back(a[i]);
            if(mp.find(v) == mp.end())
                q.push({v,a[i]});
            mp[v] = a[i];
        }
        vector< vector<int> > ans;
        while(!q.empty())
        {
            pair < vector<int> , int > tmp = q.front();
            q.pop();
            if(tmp.second == sum)
            {
                ans.push_back(tmp.first);
            }
            for(int i=0;i<n;i++)
            {
                vector<int> v;
                v = tmp.first;
                v.push_back(a[i]);
                sort(v.begin(),v.end());
                if (tmp.second + a[i] <= sum)
                {
                    if(mp.find(v) == mp.end())
                    {
                        mp[v] = tmp.second + a[i];
                        q.push({v,tmp.second + a[i]});
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            cout << "(";
            for(int j=0;j<ans[i].size();j++)
            {
                if(j == ans[i].size()-1)
                    cout<<ans[i][j]<<")";
                else
                    cout<<ans[i][j]<<" ";
            }
        }
        if(ans.size() == 0)
            cout << "Empty" ;
        cout << endl;
        
    }
	return 0;
}