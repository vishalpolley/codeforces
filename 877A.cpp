#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int cnt=0;
    string arr[]={"Danil","Olya","Slava","Ann","Nikita"};
    for(int i=0; i<5; i++)
    {
        size_t nPos=str.find(arr[i], 0);
        while(nPos!=string::npos)
        {
            cnt++;
            nPos=str.find(arr[i], nPos+1);
        }
    }
    if(cnt==1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
