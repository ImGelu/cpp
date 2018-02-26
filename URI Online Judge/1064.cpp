#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,d,e,f,s=0;
double m;
int k=0;
cin>>a>>b>>c>>d>>e>>f;
if(a>0)
{
k++;
s=s+a;
}
if(b>0)
{
k++;
s=s+b;
}
if(c>0)
{
k++;
s=s+c;
}
if(d>0)
{
k++;
s=s+d;
}
if(e>0)
{
k++;
s=s+e;
}
if(f>0)
{
k++;
s=s+f;
}
cout<<k<<" valores positivos"<<endl;
m=s/k;
cout<<fixed<<setprecision(1)<<m<<endl;
return 0;
}