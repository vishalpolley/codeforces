#include <bits/stdc++.h>
using namespace std;

bool minPalindrome(int n, int a)
{
    int s, x=0;
    string s1, s2;
    if(a==2)
    {
        if(n%2==0)
        {
            s1=string(ceil(n/2),'a');
            s2=string(floor(n/2),'b');
            s=s1.size();
        }
        else
        {
            s1=string(ceil(n/2)+1,'a');
            s2=string(floor(n/2),'b');
            s=s1.size();
        }
        if(n>6&&n<9)
        {
            s=3;
            s1.pop_back();
            s2.erase(0,1);
            s1.insert(s1.size(),"b");
            s2.insert(0,"a");
        }
        if(n>=9)
        {
            s=4;
            s1="";
            s2="aababb";
            for(int i=0; i<=ceil(n/6); i++)
            {
                s1.append(s2);
            }
            while(s1.length()>n)
                s1.pop_back();
            cout << s << " " << s1;
            return 0;
        }
    }
    if(a!=2)
    {
        s=1;
        if(n>=a)
        {
            for(int i=0; i<a; i++)
                s1.push_back(char(i+97));
        }
        else
        {
            for(int i=0; i<n; i++)
                s1.push_back(char(i+97));
            if(a==1)
                s=n;
            cout << s << " " << s1;
            return 0;
        }
        for(int i=0; i<ceil(n/(float)a); i++)
            s2.append(s1);
        while(s2.length()>n)
            s2.pop_back();
        if(a==1)
            s=n;
        cout << s << " " << s2;
        return 0;
    }
    if(a==1)
        s=n;
    cout << s << " " << s1+s2;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, a;
    cin >> t;
    while(t--)
    {
        cin >> n >> a;
        minPalindrome(n,a);
        cout << "\n";
    }
    return 0;
}

