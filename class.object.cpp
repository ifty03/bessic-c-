#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    double cgpa;
    int roll;

    Student(string name, int roll, double cgpa)
    {
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};
int main()
{
Student person("ashik",20,4.56);
// short
// sort(0,5);
// sort(0,5,greater<int>());
cout<<person.name<<person.roll<<person.cgpa;
    return 0;
}
