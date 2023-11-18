#include <bits/stdc++.h>
using namespace std;

int main()
{

    string f;
    // string s;
    while(cin>>f){
    // getline(cin, f);
    f.erase(remove(f.begin(), f.end(), ' '), f.end());
    sort(f.begin(), f.end());
    cout << f;
    }
    // getline(cin, s);
    

    // s.erase(remove(s.begin(), s.end(), ' '), s.end());
    // sort(s.begin(), s.end());
    // cout << s<<endl;

    return 0;
}