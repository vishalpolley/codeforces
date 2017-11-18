#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int j=n-1;
    for(int i=0; i<n-1; i++)
    {
        j=n-1;
        if(m>=n/2&&i>=n/2)
            break;
        while(arr[i]!=arr[j])
        {
            j--;
        }
        cout << m << " " << j-i+1 << endl;
        m = max(m, j-i+1);
    }
    cout << m;
    return 0;
}
