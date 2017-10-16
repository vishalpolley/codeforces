#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string::iterator it;
    int count0=0, max0=0, count1=0, max1=0;
    for(it=str.begin(); it<str.end(); it++)
    {
        if(*it=='0')
        {
            count1=0;
            count0++;
            max0=max(count0,max0);
        }
        else
        {
            count0=0;
            count1++;
            max1=max(count1,max1);
        }
    }
    if(max0>=7||max1>=7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
