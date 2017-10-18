#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag=0;
    cin >> n;
    string str = to_string(n);
    string::iterator it;
    for(it=str.begin(); it<str.end(); it++)
    {
        if(*it=='4'||*it=='7')
            flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        if(n%4==0||n%7==0||n%47==0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
