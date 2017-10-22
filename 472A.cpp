#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y, z;
    cin >> n;
    bool flag=false;
    if(n%2==0)
    {
        x=n/2;
        y=x-1;
        z=x+1;
        while(flag!=true)
        {
            if(!is_prime(x))
            {
                cout << x << " " << x;
                flag=true;
            }
            else
            {
                if(!is_prime(y)&&!is_prime(z))
                {
                     cout << y << " " << z;
                     flag=true;
                }
                else
                {
                    y--;
                    z++;
                }
            }
        }
    }
    else
    {
        y=(n+1)/2;
        z=(n-1)/2;
        while(flag!=true)
        {
            if(!is_prime(y)&&!is_prime(z))
            {
                cout << y << " " << z;
                flag=true;
            }
            else
            {
                y++;
                z--;
            }
        }
    }
    return 0;
}
