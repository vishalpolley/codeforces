#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string::iterator it;
    set<char> s;
    for(it=str.begin(); it<str.end(); it++)
    {
        s.insert(*it);
    }
    if(s.size()%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
