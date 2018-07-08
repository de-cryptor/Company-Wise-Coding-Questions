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
			cin >> a[i];
        for(int p=1;p<=n;p++)
        {
            int k=p;
    		multiset<int> s;
    		for(int i=0;i<k;i++)
    		{
    			s.insert(a[i]);
    		}
    		int start = 0;
    		multiset<int> :: iterator it;
    		it = s.begin();
    		int mx = *it;
    		for(int i=k;i<n;i++)
    		{
    			s.insert(a[i]);
    			multiset<int> :: iterator it1,it2,it;
    			it1 = s.find(a[start]);
    			it2 = it1;
    			it2++;
    			s.erase(it1,it2);
    			it = s.begin();
    			mx = max(mx,*it);
    			start++;
    		}
    		cout << mx << " ";
    		s.clear();
        }
        cout << endl;
    }
	return 0;
}