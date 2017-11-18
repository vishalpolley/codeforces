#include <bits/stdc++.h>
using namespace std;

void triple_recursion(int n, int m, int k)
{
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 && j==0)
                arr[0][0]=m;
            else if(i==j)
                arr[i][j]=arr[i-1][j-1] + k;
            else if(i>j)
                arr[i][j]=arr[i-1][j] -1;
            else if(i<j)
                arr[i][j]=arr[i][j-1] -1;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    triple_recursion(n, m, k);
    return 0;
}

