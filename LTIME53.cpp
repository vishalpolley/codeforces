#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        vector<int> v;
        while(a!=0&&b!=0)
        {
            v.push_back((a%10+b%10)%10);
            a/=10;
            b/=10;
        }
        if(a==0||b==0)
        {
            if(a==0&&b!=0)
                v.push_back(b);
            if(b==0&&a!=0)
                v.push_back(a);
        }
        if(v.back()==0&&v.size()>1)
            v.pop_back();
        for(int i=v.size()-1; i>=0; i--)
            cout << v[i];
        cout << "\n";
    }
    return 0;
}
