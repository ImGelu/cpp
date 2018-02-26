#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
int i;
float n,s;
s=0;
i=0;
do
{
cin>>n;
if (n>=0 && n<=10)
{ s=s+n;
i++;}
else
cout<<"nota invalida"<<endl;

} while (i<2);
cout<<fixed<<setprecision (2)<<"media = "<<s/2<<endl;
return 0;
}