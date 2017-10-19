#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, cnt=0;
    cin >> n;
    string str=to_string(n);
    string::iterator it;
    for(it=str.begin(); it<str.end(); it++)
    {
        if(*it=='4'||*it=='7')
            cnt++;
    }
    if(cnt==4||cnt==7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
