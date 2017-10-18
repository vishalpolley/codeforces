#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string::iterator it;
    if(str.length()==1)
    {
        if(islower(str[0]))
        {
            str[0]=toupper(str[0]);
            cout << str;
            return 0;
        }
        else
        {
            str[0]=tolower(str[0]);
            cout << str;
            return 0;
        }
    }
    for(it=str.begin()+1;it<str.end(); it++)
    {
        if(*it>=97)
        {
            cout << str;
            return 0;
        }
    }
    if(str.length()>1)
    {
        if(isupper(str[0])&&isupper(str[1]))
        {
            transform(str.begin(), str.end(), str.begin(), ::tolower);
            cout << str;
            return 0;
        }
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        str[0]=toupper(str[0]);
        cout << str;
    }
    return 0;
}
