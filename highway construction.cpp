#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
const unsigned int MOD = 1000000009;

ull power(ull n, int k)
{
    n=n%MOD;
    ull p=1;
    for(int i=0; i<k; i++)
    {
        p = ((p%MOD)*(n))%MOD;
    }
    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q, k;
    ull n, cost=0;
    cin >> q;
    while(q--)
    {
        cin >> n >> k;
        for(ull i=1; i<n-1; i++)
        {
            cost+=power((n-i),k)%MOD;
        }
        cout << cost%MOD << "\n";
    }
    return 0;
}

