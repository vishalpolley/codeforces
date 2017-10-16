#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, str2;
    cin >> str;
    vector<int> v;
    vector<int>::iterator vit;
    string::iterator it;
    for(it=str.begin(); it<str.end(); it+=2)
    {
        string x;
        x.push_back(*it);
        v.push_back(stoi(x));
    }
    sort(v.begin(), v.end());
    for(vit=v.begin(); vit!=v.end(); vit++)
    {
        string x = to_string(*vit);
        str2.append(x);
        str2.append("+");
    }
    str2.pop_back();
    cout << str2;
    return 0;
}
