#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str1, str2, str;
    cin >> str1 >> str2;
    for(int i=0; i<str1.size(); i++)
    {
        if(str1[i]!=str2[i])
            str.push_back('1');
        else
            str.push_back('0');
    }
    cout << str;
    return 0;
}
