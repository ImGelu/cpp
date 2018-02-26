#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int X,Y;
string Z="Total: R$ ";
cin>>X>>Y;

    if(X==1)
cout<<Z<<fixed<<setprecision(2)<<Y*4.00<<"\n";
    else if(X==2)
cout<<Z<<fixed<<setprecision(2)<<Y*4.50<<"\n";
    else if(X==3)
cout<<Z<<fixed<<setprecision(2)<<Y*5.00<<"\n";
    else if(X==4)
cout<<Z<<fixed<<setprecision(2)<<Y*2.00<<"\n";
    else if(X==5)
cout<<Z<<fixed<<setprecision(2)<<Y*1.50<<"\n";

    return 0;
}
