#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0, m=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]<=arr[i+1])
        {
            cnt++;
            m=max(m, cnt);
        }
        else
            cnt=0;
    }
    cout << m+1;
    return 0;
}
