#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d, cnt=0, x;
    cin >> k >> l >> m >> n >> d;
    if(k==1 or l==1 or m==1 or n==1)
    {
        cout << d;
        return 0;
    }
    for(int i=1; i<=d; i++)
    {
        if(i%k==0 or i%l==0 or i%m==0 or i%n==0)
            cnt++;
    }
    cout << cnt;
    return 0;
}
