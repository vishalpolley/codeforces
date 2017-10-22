#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    if(n%2==0)
    {
        if(n/2>=k)
            cout << k*2-1;
        else
            cout << (k-n/2)*2;
    }
    else
    {
        if((n+1)/2>=k)
            cout << k*2-1;
        else
            cout << (k-(n+1)/2)*2;
    }
    return 0;
}
