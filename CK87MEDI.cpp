#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k, a;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        while(k--)
            v.push_back(9);
        cout << *(v.begin()+v.size()/2) << "\n";
    }
    return 0;
}
