#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x=0;
    string str;
    cin >> n;
    while(n--)
    {
        cin >> str;
        if(str[0]=='+'||str[2]=='+')
            x++;
        else
            x--;
    }
    cout << x;
    return 0;
}
