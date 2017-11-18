#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int count=0;
    int len=str.length();
    for(int i=len-1;i>=0;i--)
    {
        if(str[i]=='0'&&count<6)
        {
            count++;
        }
        else if(count==6&&str[i]=='1')
        {
            count++;
            break;
        }
    }
    if(count==7)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
