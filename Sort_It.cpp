#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int roll;
    int mMarks;
    int eMarks;
};

bool st(Student a, Student b)
{
    int aTotal = a.eMarks + a.mMarks;
    int bTotal = b.eMarks + b.mMarks;

    if (aTotal == bTotal)
    {
        return a.roll < b.roll;
    }
    else
    {

        return aTotal > bTotal;
    }
}
int main()
{
    int n;
    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].section >> ar[i].roll >> ar[i].mMarks >> ar[i].eMarks;
    }

    sort(ar, ar + n, st);

    for(int i=0;i<n;i++){
    cout<<ar[i].name<<" "<<ar[i].cls<<" "<<ar[i].section<<" "<<ar[i].roll<<" "<<ar[i].mMarks<<" "<<ar[i].eMarks<<endl;
    }

    return 0;
}