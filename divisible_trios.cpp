#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, cnt=0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> arr[n];
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if((arr[i]+arr[j]+arr[k])%5==0)
                {
                    cout << arr[i]+arr[j]+arr[k] << endl;
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
