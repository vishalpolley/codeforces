#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, r;
    cin >> t;
    while(t--)
    {
        cin >> n >> r;
        int a[n], right=INT_MAX, left=-1;
        string m="YES";
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=1; i<n; i++)
        {
            if(a[i]<a[i-1])
                right = a[i-1];
            else
                left = a[i-1];
            if(!(a[i]>left&&a[i]<right))
            {
                m="NO";
                break;
            }
        }
        cout << m << "\n";
    }
    return 0;
}

