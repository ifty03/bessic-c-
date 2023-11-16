#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    char s;
    int b;

    cin >> a >> s >> b;

    if (s == '=')
    {
        if (a == b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (s == '>')
    {
        if (a > b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else
    {
        if (a < b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}