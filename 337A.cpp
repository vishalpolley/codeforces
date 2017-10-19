#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, f;
    cin >> n >> m;
    vector<int> v;
    vector<int>::iterator it;
    set<int> s;
    while(m--)
    {
        cin >> f;
        v.push_back(f);
    }
    sort(v.begin(), v.end());
    for(it=v.begin(); it<v.end(); it++)
    {
        if(*(it+n-1)!=*(v.end()))
        {
            s.insert(*(it+n-1)-*(it));
        }
        else
            break;
    }
    set<int>::iterator itr=s.begin();
    cout << *itr;
    return 0;
}
