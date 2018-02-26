#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double a,b;
string c;
cin>>c>>a>>b;
cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<a+(b*15/100)<<"\n";
}
