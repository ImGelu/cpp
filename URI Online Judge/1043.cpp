#include <iostream>
#include<iomanip>

using namespace std;

int main()
{ float a,b,c;
cin>>a>>b>>c;
if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a) cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
else
cout<<fixed<<setprecision(1)<<"Area = "<<((a+b)*c)/-2<<endl;
return 0;
}
