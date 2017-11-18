#include <bits/stdc++.h>
#define slope(a1,a2,a3,x) a1+2*a2*x+3*a3*pow(x,2)
using namespace std;

long long func(int a0,int a1,int a2,int a3,int x)
{
    return a0+(a1*x)+(a2*pow(x,2))+(a3*pow(x,3));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, q;
    long long m, v;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n][4];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<4; j++)
                cin >> arr[i][j];
        }
        cin >> q;
        int qry[q];
        for(int i=0; i<q; i++)
            cin >> qry[i];
        for(int j=0; j<q; j++)
        {
            m=LLONG_MAX;
            for(int i=0; i<n; i++)
            {
                v=func(arr[i][0], arr[i][1], arr[i][2], arr[i][3], qry[j]);
                m=min(m, v);
            }
            cout << m << " ";
        }
        cout << "\n";
    }
    return 0;
}

