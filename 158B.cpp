#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, total=0, cnt=0;
    cin >> n;
    int a=0, b=0, c=0, d=0;
    while(n--)
    {
        cin >> s;
        if(s==1)
            a++;
        if(s==2)
            b++;
        if(s==3)
            c++;
        if(s==4)
            d++;
    }
    while(a>=1&&c>0)
    {
        cnt+=1;
        a-=1;
        c-=1;
    }
    if(b>0)
    {
        cnt+=(b/2);
        b-=(b/2)*2;
    }
    if(a>0)
    {
        cnt+=(a/4);
        a-=(a/4)*4;
    }
    while(a>=2&&b>=1)
    {
        cnt+=1;
        a-=2;
        b-=1;
    }
    if(a==1&&b==1)
    {
        a=0;
        b=0;
        cnt++;
    }
    if(a<=3&&a>0)
    {
        a=0;
        cnt++;
    }
    cout << cnt+a+b+c+d;
}
