#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    int roll;

};
int main(){
int n;
cin>>n;

Student ar[n];

for(int i=0;i<n;i++){
cin>>ar[i].name>>ar[i].roll>>ar[i].marks;
}
for(int i=0;i<n;i++){
cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
}

    return 0;
}