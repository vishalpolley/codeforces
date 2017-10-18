#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, cost=0, cnt=1;
    cin >> k >> n >> w;
    while(cnt<=w)
    {
        cost+=k*cnt;
        cnt++;
    }
    if(cost<n)
        cout << 0;
    else
        cout << cost-n;
}
