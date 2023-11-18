#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int id;
        char name[101];
        char sub;
        int mark;

        int j = INT_MIN;
        string n;
        char s;
        int m = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            cin >> id;
            cin >> name;
            cin >> sub;
            cin >> mark;
            if (m < mark)
            {
                s = sub;
                j = id;
                n = name;
                m = mark;
            }
        }
        cout << j << " " << n << " " << s << " " << m << endl;
    }

    return 0;
}