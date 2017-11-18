#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, w, sum=0, area=0;
    cin >> h >> w;
    int arr[h][w];
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cin >> arr[i][j];
            sum+=arr[i][j];
        }
    }
    area=sum*6-(sum-h*w)*2;
    for(int i=0; i<h; i++)
    {
        for(int j=1; j<w; j++)
        {
            area-=min(arr[i][j-1],arr[i][j])*2;
        }
    }
    for(int i=1; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            area-=min(arr[i-1][j],arr[i][j])*2;
        }
    }
    cout << area;
    return 0;
}
