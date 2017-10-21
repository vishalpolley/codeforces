#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n]={0}, p1, p2, a;
    cin >> p1;
    while(p1--)
    {
        cin >> a;
        arr[--a]=1;
    }
    cin >> p2;
    while(p2--)
    {
        cin >> a;
        arr[--a]=1;
    }
    find(arr, arr+n, 0)!=&arr[n] ? cout << "Oh, my keyboard!" : cout << "I become the guy.";
    return 0;
}
