#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, n1, n2, n3, cnt=0;
    cin >> n;
    while(n--)
    {
        cin >> n1 >> n2 >> n3;
        if((n1==1&&n2==1) || (n2==1&&n3==1) || (n3==1&&n1==1))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
