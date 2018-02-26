#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double a[13][13], s;
int i,j,n;
n=12;
char O;
cin>>O;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
s=0;
int contor=0;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(i<j && j>n-i+1){
s=s+a[i][j];
contor++;}
if(O=='S')
cout<<fixed<<setprecision(1)<<s<<endl;
else cout<<fixed<<setprecision(1)<<s/contor<<endl;

return 0;

}
