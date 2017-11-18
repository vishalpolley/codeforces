#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    bool flag=true;
    while(t--)
    {
        flag=true;
        vector<int> v;
        cin >> n >> k;
        int arr[n+1]={0};
        for(int i=1; i<n+1; i++)
        {
            if(arr[i]!=0)
                v.push_back(arr[i]);
            else if(i+k<n+1)
            {
                arr[i+k]=i;
                arr[i]=i+k;
                v.push_back(arr[i]);
            }
            else
            {
                cout << "-1";
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            for(int i=0; i<n; i++)
                cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
