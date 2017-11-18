#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, cnt, c=1;
    cin >> t;
    string s, str;
    string::iterator it, it1;
    while(t--)
    {
        cnt=0;
        cin >> str;
        if(str.length()==1)
        {
            cout << 0 << "\n";
            continue;
        }
        auto p=*str.begin();
        for(it=str.begin()+1; it<str.end(); it++)
        {
            if(it==str.end()-1)
            {
                if(*it==*(it-1))
                    c++;
                    cnt+=(c*(c-1))/2;
            }
            else if(p==*it)
            {
                c++;
            }
            else
            {
                cnt+=(c*(c-1))/2;
                p=*it;
                c=1;
            }
        }
        for(it=str.begin(); it<str.end()-1; it++)
        {
            it1=it+1;
            s.clear();
            while(*it!=*it1&&(it1!=str.end()-1))
            {
                s.push_back(*it1);
                it1++;
            }
            if(!s.empty()&&*it==*(it1))
                if(s.find_first_not_of(s[0])==string::npos)
                {
                    cnt++;
                }
        }
        cout << cnt << "\n";
    }
    return 0;
}
