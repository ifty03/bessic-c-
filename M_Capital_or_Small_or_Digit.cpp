#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
char x;
cin>>x;
int ascii = x;

if(ascii>47&& ascii<58){
cout<<"IS DIGIT"<<endl;
}else if(ascii>64&& ascii<91){
cout<<"ALPHA"<<endl<<"IS CAPITAL";
}else if(ascii>96&& ascii<123){
cout<<"ALPHA"<<endl<<"IS SMALL";
}
    return 0;
}