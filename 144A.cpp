#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m1=0, m2=101, i1, i2, cnt=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(m1<arr[i])
        {
            m1=arr[i];
            i1=i;
        }
        if(m2>=arr[i])
        {
            m2=arr[i];
            i2=i;
        }
    }
    int m=i1;
    while(arr[0]!=arr[i1])
    {
        swap(arr[i1], arr[i1-1]);
        i1--;
        cnt++;
    }
    if(m>i2)
    {
        while(arr[n-1]!=arr[i2+1])
        {
            swap(arr[i2+1], arr[i2+2]);
            i2++;
            cnt++;
        }
    }
    else
    {
        while(arr[n-1]!=arr[i2])
        {
            swap(arr[i2], arr[i2+1]);
            i2++;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
