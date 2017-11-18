#include <bits/stdc++.h>
using namespace std;

bool sort_sec(const pair<string, int> &a, const pair<string, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p, l1, l2;
    cin >> n;
    string s, str;
    vector< pair <string, int>> v;
    while(n--)
    {
        cin >> s >> p;
        str=to_string(p);
        l1 = count(str.begin(), str.end(), '4');
        l2 = count(str.begin(), str.end(), '7');
        if(l1 == l2 && l1+l2==str.length())
            v.push_back( make_pair(s,p));
    }
    sort(v.begin(), v.end(), sort_sec);
    if(!v.empty())
        cout << v[0].first;
    else
        cout << "-1";
    return 0;
}
