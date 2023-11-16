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
cout<<person.name<<person.roll<<person.cgpa;
    return 0;
}
