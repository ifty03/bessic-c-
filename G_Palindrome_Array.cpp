#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    int br[n];

    int k = sizeof(ar) / sizeof(ar[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    };

    for (int i = 0; i < n; i++)
    {
        br[i] = ar[i];
    };

    reverse(br, br + k);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != br[i])
        {
            flag = 1;
            break;
        }
    };

    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}