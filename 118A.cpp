#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, out;
    char s;
    cin >> str;
    string::iterator it;
    for(it=str.begin(); it<str.end(); it++)
    {
        s = tolower(*it);
        if (s!='a'&&s!='e'&&s!='i'&&s!='o'&&s!='u'&&s!='y')
        {
            out += '.';
            out += s;
        }
    }
    cout << out;
    return 0;
}
