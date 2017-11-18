#include <bits/stdc++.h>
using namespace std;

string palindrome(int n, int p)
{
    int cnt=1, x=p;
    string pd, s;
    while((x-2)!=0)
    {
        s.push_back('b');
        x--;
    }
    s.insert(0,"a");
    s.push_back('a');
    if(n==p)
    {
        return s;
    }
    x=p;
    if(n!=p)
    {
        while(n>=x)
        {
            pd.append(s);
            cnt++;
            x=p*cnt;
        }
    }
    return pd;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, p;
    cin >> t;
    bool flag=false;
    while(t--)
    {
        flag=false;
        cin >> n >> p;
        if(p==1)
        {
            cout << "impossible";
            flag=true;
        }
        if(n%2==0&&n!=2&&p==2)
        {
            cout << "impossible";
            flag=true;
        }
        if(n%p==0&&n!=2&&p!=1&&p!=2&&flag!=true)
        {
            cout << palindrome(n,p);
            flag=true;
        }
        else if(flag==false)
        {
                cout << "impossible";
        }
        cout << "\n";
    }
    return 0;
}
