#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, cntA=0, cntB=0;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        cntA=0; cntB=0; x=0;
        cntA=count(s.begin(), s.end(), 'A');
        cntB=count(s.begin(), s.end(), 'B');
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='A')
            {
                x=i+1;
                while(s[x]=='.')
                {
                    x++;
                    if(s[x]=='A')
                    {
                        cntA+=x-i-1;
                        i=x-1;
                        break;
                    }
                }
            }
            if(s[i]=='B')
            {
                x=i+1;
                while(s[x]=='.')
                {
                    x++;
                    if(s[x]=='B')
                    {
                        cntB+=x-i-1;
                        i=x-1;
                        break;
                    }
                }
            }
        }
        cout << cntA << " " << cntB << "\n";
    }
    return 0;
}

