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
        int count = pow(2,n);
        set < vector<int> > s;
        for(int i=0;i<count;i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            {
                if(i & (1 << j))
                {
                    v.push_back(a[j]);
                }
            }
            sort(v.begin(),v.end());
            s.insert(v);
        }
        for(auto it = s.begin();it!= s.end();it++)
        {
            vector<int> tmp = *it;
            if(tmp.size() == 0)
            {
                cout << "()" ;
                continue;
            }
            cout << "(";
            for(int i=0;i<tmp.size();i++)
            {
                if(i == tmp.size()-1)
                {
                    cout << tmp[i] << ")";
                }
                else
                {
                    cout << tmp[i] << " ";
                }
            }
        }
        cout << endl;
    }
	return 0;
}