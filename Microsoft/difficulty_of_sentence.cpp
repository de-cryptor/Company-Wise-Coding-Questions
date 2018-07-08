using namespace std;
int main() 
{
    int t;
    cin >> t;
    string p;
    getline(cin,p);
    while(t--)
    {
        string s;
        getline(cin,s);
        int ans=0,w=0;
        map<char,int> mp;
        mp['a'] = 1,mp['e'] = 1,mp['i'] = 1,mp['o'] = 1,mp['u'] = 1;
        mp['A'] = 1,mp['E'] = 1,mp['I'] = 1,mp['O'] = 1,mp['U'] = 1;
        int v=0,c=0,cnt=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == ' ' && i != s.size()-1)
            {
                if(v < c)
                    flag = 1;
                ans = ans + ( flag ? 5 : 3);
                v=0,c=0,cnt=0,flag=0;
                w++;
            }
            else if(mp.find(s[i]) == mp.end())
            {
                cnt++;
                c++;
            }
            else
            {
                v++;
                cnt=0;
            }
            if(cnt>=4)
                flag = 1;
        }
        if(v < c)
            flag = 1;
        ans = ans + (flag ? 5 : 3);
        cout << ans << endl;
    }
	return 0;
}