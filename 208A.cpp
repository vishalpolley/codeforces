#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str, s;
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(str.substr(i, 3)=="WUB")
            i+=2;
        else
        {
            s.push_back(str[i]);
            if(str.substr(i+1,3)=="WUB")
                s.push_back(' ');
        }
    }
    cout << s;
    return 0;
}
