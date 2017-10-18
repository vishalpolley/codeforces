#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=0;
    string str;
    cin >> str;
    string cmp="hello";
    string::iterator it;
    for(it=str.begin(); it<str.end(); it++)
    {
        if(*it==cmp[j])
            j++;
    }
    if(j==cmp.size())
        cout << "YES";
    else
        cout << "NO";
}
