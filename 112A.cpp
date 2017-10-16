#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if(str1==str2)
    {
        cout << 0;
        return 0;
    }
    string::iterator it1=str1.begin();
    string::iterator it2=str2.begin();
    for(it1; it1<str1.end(); it1++, it2++)
    {
        if(*it1>*it2)
        {
            cout << 1;
            return 0;
        }
        if(*it1<*it2)
        {
            cout << -1;
            return 0;
        }

    }
    return 0;
}
