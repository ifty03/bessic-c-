#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    
    int flag = 0;
    while (cin>>s)
    {
       
        if (s == "Jessica")
        {
            flag = 1;
        };
    };
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}