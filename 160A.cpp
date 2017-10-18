#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, sum=0, itsum=0, cnt=0;
    cin >> n;
    vector<int> v;
    vector<int>::iterator it;
    while(n--)
    {
        cin >> x;
        sum+=x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    for(it=v.begin(); it<v.end(); it++)
    {
        if(itsum<=sum/2)
        {
            itsum+=*it;
            cnt++;
        }
    }
    if(sum%2!=0&&v.size()>=2)
    {
        cout << cnt++;
    }
    else
        cout << cnt;
    return 0;
}
