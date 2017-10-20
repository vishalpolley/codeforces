#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if(b==1)
    {
        if((a+b)>(b+c))
        {
            cout << a*(b+c);
            return 0;
        }
        if((a+b)<(b+c))
        {
            cout << (a+b)*c;
            return 0;
        }

    }
    if(a==1&&c!=1)
    {
        cout << (a+b)*c;
        return 0;
    }
    if(a!=1&&c==1)
    {
        cout << a*(b+c);
        return 0;
    }
    if(a!=1&&b!=1&&c!=1)
    {
        cout << a*b*c;
        return 0;
    }
    if(a==c&&a!=1&&b==1)
    {
        cout << (a+b)*c;
    }
    else
        cout << a+b+c;
    return 0;
}
