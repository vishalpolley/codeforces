#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt=1;
    cin >> n;
    string str, m;
    string::iterator it;
    while(n--)
    {
        cin >> m;
        str.append(m);
    }
    for(it=str.begin(); it<str.end(); it++)
    {
        if(*it==*(it+1))
            cnt++;
    }
    cout << cnt;
    return 0;
}
