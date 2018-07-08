/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        pair<int,int> p[n+5];
        for(int i=0;i<n;i++)
        {
            cin >> p[i].first >> p[i].second;
        }
        sort(p,p+n,cmp);
        vector < pair<int,int> > ans;
    	for(int i=0;i<n;i++)
    	{
    	    if(i == 0)
    	        ans.push_back(p[i]);
    	    else if(p[i].first > ans.back().second)
    	        ans.push_back(p[i]);
    	    else if (p[i].second <= ans.back().second )
    	        continue;
    	    else
    	        ans.back().second = p[i].second;
    	}
        for(int i=0;i<ans.size();i++)
        {
            cout << ans[i].first << " " << ans[i].second << " ";
        }
        cout << endl;
    }
	return 0;
}