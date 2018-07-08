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
        int n,sum;
        cin >> n >> sum;
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        int flg = 1;
        set < vector<int> > st;
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int k=j+1,l=n-1;
                while(k < l)
                {
                    if(a[i] + a[j] + a[k] + a[l] == sum)
                    {
                        vector<int> v;
                        v.push_back(a[i]);
                        v.push_back(a[j]);
                        v.push_back(a[k]);
                        v.push_back(a[l]);
                        st.insert(v);
                        flg = 0;
                        k++;
                        l--;
                    }
                    else if(a[i] + a[j] + a[k] + a[l] < sum)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
            }
        }
        for(auto it=st.begin();it!=st.end();it++)
        {
            vector<int> tmp = *it;
            cout << tmp[0] <<" " <<tmp[1] << " " << tmp[2] << " " << tmp[3] << " $";
        }
        if(flg)
            cout << -1 ;
        cout << endl;
        
    }
	return 0;
}