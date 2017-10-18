#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, s=0, m=0;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        s-=a;
        s+=b;
        m = max(s, m);
    }
    cout << m;
    return 0;
}
