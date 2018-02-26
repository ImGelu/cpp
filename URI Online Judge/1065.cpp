#include <iostream>
using namespace std;
int main()
{

int a,b,c,d,e,par=0;
cin>>a>>b>>c>>d>>e;
if(a%2==0)par++;
if(b%2==0)par++;
if(c%2==0)par++;
if(d%2==0)par++;
if(e%2==0)par++;
cout<<par<<" valores pares"<<endl;

return 0;

}