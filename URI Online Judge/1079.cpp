#include <iostream>
#include <iomanip>
using namespace std;
int main () 
{
float a[10000],b[10000],c[10000];
int n,i;
cin>> n ;
for (i=1;i<=n;i++)
cin>>a[i]>>b[i]>>c[i];
for(i=1;i<=n;i++)
cout<<fixed<<setprecision (1)<< (a[i]*2+b[i]*3+c[i]*5)/10<<endl;
return 0; 
}