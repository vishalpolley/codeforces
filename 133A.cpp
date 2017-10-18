#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string::iterator it;
    for(it=str.begin(); it<str.end(); it++)
    {
        if(*it==72||*it==81||*it==57)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
