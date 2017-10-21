// Time complexity : O(n*log(log n))
#include<bits/stdc++.h>
using namespace std;

void sieve_of_eratosthenes(int n)
{
    bool arr[n];
    memset(arr, true, sizeof(arr));
    for(int i=2; i*i<=n; i++)
    {
        if(arr[i]==true)
        {
            int p, x=2;
            p=i*x;
            while(p<=n)
            {
                arr[p]=false;
                p=i*x;
                x++;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(arr[i])
            cout << i << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    sieve_of_eratosthenes(n);
    return 0;
}
