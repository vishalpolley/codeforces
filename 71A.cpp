#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, len;
    cin >> i;
    while(i--)
    {
        string s;
        cin >> s;
        len = s.length();
        if(len>10)
        {
            cout << s[0] << len-2 << s[len-1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
