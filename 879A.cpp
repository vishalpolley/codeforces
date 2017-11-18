#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int s, d, p, i;
    cin >> p >> d;
    for(int cnt=1; cnt<n; cnt++)
    {
        cin >> s >> d;
        i=1;
        int x=s;
        while(p>=x)
        {
            x=s+d*i;
            i++;
        }
            p=x;
    }
    cout << p;
    return 0;
}

