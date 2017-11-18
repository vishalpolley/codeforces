#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, n, m;
    cin >> t;
    while(t--)
    {
        m=0;
        cin >> a;
        string str=to_string(a), str1, out="-1";
        string::iterator it;
        for(int i=0; i<str.length(); i++)
        {
            str1=str;
            str1.erase(str1.begin()+i);
            n=stoi(str1);
            if(n%6==0)
            {
                if(n>m)
                    out=str1;
                m=max(m,n);
            }
        }
        cout << out << "\n";
    }
    return 0;
}

