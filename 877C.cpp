#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << n+1 << "\n";
    n++;
    while(n--)
    {
        if(n==0)
        {
            cout << 2;
            return 0;
        }
        cout << n << " ";
    }
    return 0;
}
