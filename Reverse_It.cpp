#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student ar[n];

    string name;
    int roll;
    char section;
    int marks;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].section >> ar[i].marks;
    }
int size = sizeof(ar) / sizeof(ar[0]);
int f = floor(size/2);

    for (int i = 0; i < f; i++)
    {

        char tamp = ar[i].section;
        ar[i].section = ar[n - (i + 1)].section;
        // cout<<ar[n - (i + 1)].section<<endl;
        ar[n - (i + 1)].section = tamp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].section << " " << ar[i].marks << endl;
    }


    return 0;
}