#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string str = "Programming is easy.";
    char ch = 'r';

    if (strchr(str.c_str(), ch))
        cout << ch << " is present \"" << str.c_str() << "\"";
    else
        cout << ch << " is not present \"" << str << "\"";

    return 0;
}
