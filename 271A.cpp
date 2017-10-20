#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y, x, n, cnt, arr[10];
    cin >> y;
    while(y<=9050)
    {
        y++;
        n=y;
        cnt=0;
        memset(arr, 0, 10*sizeof(arr[0]));
        while(n!=0)
        {
            x=n%10;
            if(arr[x]==0)
            {
                cnt++;
                arr[x]=1;
            }
            n/=10;
        }
        if(cnt==4)
        {
            cout << y;
            return 0;
        }
    }
    return 0;
}
