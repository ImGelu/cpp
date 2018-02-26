#include <iostream>
using namespace std;

int main(){
int n,a,l,z;

cin>>n;

a=n/365;
n=n%365;

l=n/30;
n=n%30;

z=n;

cout<<a<<" ano(s)\n"<<l<<" mes(es)\n"<<z<<" dia(s)\n";

}
