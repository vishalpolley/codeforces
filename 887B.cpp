#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, n1, cnt=9, num1, num2, x;
    bool flag=true;
    cin >> n;
    n1=n;
    array<array <int, 10>, 3> arr={0};
    array<int,10> arrb={0};
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<6;j++)
        {
            cin >> x;
            arr[i][x]++;
            arrb[x]++;
        }
    }
    if(n1==1)
    {
        for(int i=1; i<=6; i++)
        {
            if(arrb[i]>=1)
                continue;
            else
            {
                cout << i-1 << endl;
                return 0;
            }
        }
    }
    for(int i=1; i<=9; i++)
    {
        if(arrb[i]>=1)
            flag=true;
        else
        {
            flag=false;
            cout << i-1 << endl;
            return 0;
        }
    }
    if(n1==2)
    {
        while(flag==true)
        {
            cnt++;
            num1=cnt%10;
            num2=(cnt/10)%10;
            if((arr[0][num1]>=1&&arr[1][num2]>=1)||(arr[1][num1]>=1&&arr[0][num2]>=1))
            {
                continue;
            }
            else
            {
                n=cnt-1;
                flag=false;
                cout << n << endl;
                return 0;
            }

        }
    }
    if(n1==3)
    {
        while(flag==true)
        {
            cnt++;
            num1=cnt%10;
            num2=(cnt/10)%10;
            if(((arr[0][num1]>=1&&arr[1][num2]>=1)||(arr[1][num1]>=1&&arr[0][num2]>=1))||((arr[1][num1]>=1&&arr[2][num2]>=1)||(arr[2][num1]>=1&&arr[1][num2]>=1))||((arr[2][num1]>=1&&arr[0][num2]>=1)||(arr[0][num1]>=1&&arr[2][num2]>=1)))
            {
                continue;
            }
            else
            {
                n=cnt-1;
                flag=false;
                cout << n << endl;
                return 0;
            }

        }
    }
    return 0;
}

