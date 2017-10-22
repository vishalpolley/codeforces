#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, y, a, x, cnt;
    cin >> t;
    while(t--)
    {
        cnt=0;
        cin >> y;
        for(int b=1; b<=700; b++)
        {
            a=y-b;
            if(a<=0)
                break;
            cnt+=sqrt(a);
        }
        cout << cnt << "\n";
    }
    return 0;
}
