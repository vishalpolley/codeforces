#include <bits/stdc++.h>
using namespace std;

bool check(const array<int,25> &arra)
{
    bool flag=false;
    for(int i=1; i<=24; i+=4)
    {
        if(arra.at(i)==arra.at(i+1)&&arra.at(i+2)==arra.at(i+3)&&arra.at(i+1)==arra.at(i+2))
        {
            flag=true;
        }
        else
        {
            flag=false;
            break;
        }
    }
    return flag;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    array<int,25> arra={0};
    for(int i=1; i<=24; i++)
        cin >> arra.at(i);
    // Rotate Front F
    array<int,25> arrb = arra;
    arrb.at(3)=arra.at(16);
    arrb.at(4)=arra.at(14);
    arrb.at(17)=arra.at(3);
    arrb.at(19)=arra.at(4);
    arrb.at(10)=arra.at(17);
    arrb.at(9)=arra.at(19);
    arrb.at(16)=arra.at(10);
    arrb.at(14)=arra.at(9);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Front' F'
    arrb=arra;
    arrb.at(4)=arra.at(19);
    arrb.at(3)=arra.at(17);
    arrb.at(14)=arra.at(4);
    arrb.at(16)=arra.at(3);
    arrb.at(9)=arra.at(14);
    arrb.at(10)=arra.at(16);
    arrb.at(19)=arra.at(9);
    arrb.at(17)=arra.at(10);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Right R
    arrb=arra;
    arrb.at(2)=arra.at(6);
    arrb.at(4)=arra.at(8);
    arrb.at(6)=arra.at(10);
    arrb.at(8)=arra.at(12);
    arrb.at(10)=arra.at(23);
    arrb.at(12)=arra.at(21);
    arrb.at(23)=arra.at(2);
    arrb.at(21)=arra.at(4);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Right' R'
    arrb=arra;
    arrb.at(2)=arra.at(21);
    arrb.at(4)=arra.at(23);
    arrb.at(6)=arra.at(2);
    arrb.at(8)=arra.at(4);
    arrb.at(10)=arra.at(6);
    arrb.at(12)=arra.at(8);
    arrb.at(23)=arra.at(12);
    arrb.at(21)=arra.at(10);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Upper U
    arrb=arra;
    arrb.at(13)=arra.at(5);
    arrb.at(14)=arra.at(6);
    arrb.at(5)=arra.at(17);
    arrb.at(6)=arra.at(18);
    arrb.at(17)=arra.at(21);
    arrb.at(18)=arra.at(22);
    arrb.at(21)=arra.at(14);
    arrb.at(22)=arra.at(13);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Upper' U'
    arrb=arra;
    arrb.at(13)=arra.at(22);
    arrb.at(14)=arra.at(21);
    arrb.at(5)=arra.at(13);
    arrb.at(6)=arra.at(14);
    arrb.at(17)=arra.at(5);
    arrb.at(18)=arra.at(6);
    arrb.at(21)=arra.at(17);
    arrb.at(22)=arra.at(18);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Back B
    arrb=arra;
    arrb.at(2)=arra.at(20);
    arrb.at(1)=arra.at(18);
    arrb.at(13)=arra.at(2);
    arrb.at(15)=arra.at(1);
    arrb.at(11)=arra.at(13);
    arrb.at(12)=arra.at(15);
    arrb.at(20)=arra.at(11);
    arrb.at(18)=arra.at(12);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Back' B'
    arrb=arra;
    arrb.at(2)=arra.at(13);
    arrb.at(1)=arra.at(15);
    arrb.at(13)=arra.at(11);
    arrb.at(15)=arra.at(12);
    arrb.at(11)=arra.at(20);
    arrb.at(12)=arra.at(18);
    arrb.at(20)=arra.at(2);
    arrb.at(18)=arra.at(1);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Left L
    arrb=arra;
    arrb.at(1)=arra.at(24);
    arrb.at(3)=arra.at(22);
    arrb.at(5)=arra.at(1);
    arrb.at(7)=arra.at(3);
    arrb.at(9)=arra.at(5);
    arrb.at(11)=arra.at(7);
    arrb.at(24)=arra.at(9);
    arrb.at(22)=arra.at(11);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Left' L'
    arrb=arra;
    arrb.at(1)=arra.at(5);
    arrb.at(3)=arra.at(7);
    arrb.at(5)=arra.at(9);
    arrb.at(7)=arra.at(11);
    arrb.at(9)=arra.at(24);
    arrb.at(11)=arra.at(22);
    arrb.at(24)=arra.at(1);
    arrb.at(22)=arra.at(3);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Down D
    arrb=arra;
    arrb.at(15)=arra.at(24);
    arrb.at(16)=arra.at(23);
    arrb.at(7)=arra.at(15);
    arrb.at(8)=arra.at(16);
    arrb.at(19)=arra.at(7);
    arrb.at(20)=arra.at(8);
    arrb.at(23)=arra.at(19);
    arrb.at(24)=arra.at(20);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    // Rotate Down' D'
    arrb=arra;
    arrb.at(15)=arra.at(7);
    arrb.at(16)=arra.at(8);
    arrb.at(7)=arra.at(19);
    arrb.at(8)=arra.at(20);
    arrb.at(19)=arra.at(23);
    arrb.at(20)=arra.at(24);
    arrb.at(23)=arra.at(16);
    arrb.at(24)=arra.at(15);
    if (check(arrb))
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}

