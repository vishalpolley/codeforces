#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int cnt1=0, cnt2=0, cnt3=0, i=0, m=0;
    string::iterator it=str.begin();
    if(str.front()=='b'&&str.back()=='b')
        m=count(str.begin(), str.end(), 'b');
    while(*it=='b')
        str.erase(0,1);
    for(it=str.begin(); it<str.end();)
    {
        if(i==0&&*it=='a')
        {
            cnt1++;
            it++;
        }
        if(*it=='b'&&i==0) i=1;
        m=max(m, cnt1+cnt2+cnt3);
        if(i==1&&*it=='b')
        {
            cnt2++;
            it++;
        }
        if(*it=='a'&&i==1) i=2;
        m=max(m, cnt1+cnt2+cnt3);
        if(i==2&&*it=='a')
        {
            cnt3++;
            it++;
        }
        m=max(m, cnt1+cnt2+cnt3);
        if(*it=='b'&&i==2)
        {
            i=1;
            cnt1=cnt3;
            cnt2=1;
            cnt3=0;
            it++;
        }
        m=max(m, cnt1+cnt2+cnt3);
    }
    cout << m;
    return 0;
}
