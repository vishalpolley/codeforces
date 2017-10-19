#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    string::iterator it;
    while(t--)
    {
        for(it=str.begin(); it<str.end(); it++)
        {
            if(*it=='B'&&*(it+1)=='G')
            {
                *it='G';
                *(it+1)='B';
                it++;
            }
        }
    }
    cout << str;
    return 0;
}
