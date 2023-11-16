#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    double cgpa;
    int roll;

};
int main(){
    Student a,b;
    cin.getline(a.name,100);
    cin>>a.roll>>a.cgpa;
    cout<<a.name<<endl<<a.roll<<" "<<a.cgpa<<endl;

    // getchar for skip invisible enter
    getchar();

    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;
    cout<<b.name<<endl<<b.roll<<" "<<b.cgpa<<endl;
    return 0;
}
