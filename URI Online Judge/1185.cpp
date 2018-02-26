#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double a[13][13], s;
int i, j, n;
n=12;
char O;
cin>>O;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
s=0;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(j<n-i+1)
s=s+a[i][j];
if(O=='s')
cout<<fixed<<setprecision(1)<<s<<endl;
else cout<<fixed<<setprecision(1)<<s/66<<endl;


return 0;

}