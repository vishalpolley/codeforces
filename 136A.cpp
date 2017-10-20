#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        arr[x]=i;
    }
    size_t index=0;
    for(const auto &value: arr)
    {
        if(index++==0)
            continue;
        cout << value << " ";
    }
    return 0;
}
