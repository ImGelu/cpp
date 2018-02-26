#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
double a[13][13],s;
char O;
cin>>O;

for(int i=1; i<=12; i++)
    for(int j=1; j<=12; j++)
    cin>>a[i][j];
    s=0;

for(int i=1; i<=12; i++)
    for(int j=1; j<=12; j++)
if(i>j)
s=s+a[i][j];
if(O=='S')
    cout<<fixed<<setprecision(1)<<s<<"\n";
else
    cout<<fixed<<setprecision(1)<<s/66<<"\n";
return 0;
}
