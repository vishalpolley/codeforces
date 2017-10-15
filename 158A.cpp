#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, index, cnt2=0;
    cin >> n >> k;
    int cnt = k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]>0)
            cnt2++;
    }
    if(arr[0]==0)
    {
        cout << 0;
        return 0;
    }
    if(arr[k-1]==0)
    {
        cout << cnt2;
        return 0;
    }
    for(int i=k; i<n; i++)
    {
        if(arr[i]==arr[k-1])
            cnt++;
    }
    cout << cnt;
    return 0;
}
