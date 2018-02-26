#include <iostream>
using namespace std;

int main(){
int N,o,m,s;

cin>>N;

o=N/3600;
N=N%3600;

m=N/60;

s=N%60;

cout<<o<<":"<<m<<":"<<s<<"\n";

}
