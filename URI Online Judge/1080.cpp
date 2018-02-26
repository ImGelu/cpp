#include <iostream>
using namespace std;
int main () 
{
int a[101],i,max,poz;
for (i=1;i<=100;i++)
cin>>a[i];
max=a[1];
poz=1;
for(i=1;i<=100;i++)
if(a[i]>max)
{max=a[i];
poz=i;}
cout<<max<<endl;
cout<<poz<<endl;
return 0;
}