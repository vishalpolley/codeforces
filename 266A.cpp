#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    cin >> n;
    string str;
    cin >> str;
    string::iterator it;
    for(it=str.begin(); it<str.end(); it++)
    {
        if(*it==*(it+1))
            cnt++;
    }
    cout << cnt;
}
