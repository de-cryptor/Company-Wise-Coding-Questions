/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
int kadane(int tmp[],int n,int* start,int* finish)
{
    int max_so_far = 0;
    int max_ending_here = 0;
    *start= 0,*finish = -1;
    for(int i=0;i<n;i++)
    {
        max_ending_here += tmp[i];
        if(max_ending_here < 0)
        {
            max_ending_here = 0;
            *start = i + 1;
        }
        if(max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            *finish = i;
        }
    }
    if(max_so_far == 0)
    {
        max_so_far = -INT_MAX;
        for(int i=0;i<n;i++)
        {
            if (tmp[i] > max_so_far)
            {
                max_so_far = tmp[i];
                *start = i;
                *finish = i;
            }
        }
    }
    return max_so_far;
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int R,C;
        cin >> R >> C;
        int M[R+2][C+2];
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                cin >> M[i][j];
            }
        }
        int maxsum=INT_MIN;
        int left,top,bottom,right,start,finish,sum;
        
        for(int i=0;i<C;i++)
        {
            int tmp[R+5];
            memset(tmp,0,sizeof(tmp));
            for(int j=i;j<C;j++)
            {
                for(int k=0;k<R;k++)
                {
                    tmp[k] += M[k][j];
                }
                int sum = kadane(tmp,R,&start,&finish);
                if(sum > maxsum)
                {
                    maxsum = sum;
                    top = start;
                    bottom = finish;
                    left = i;
                    right = j;
                }
            }
        }
        cout << maxsum << endl;
    }
	return 0;
}