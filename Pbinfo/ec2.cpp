#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;

    cin>>a>>b>>c;

    delta=(b*b)-(4*a*c);

    if(delta<0) cout<<"Nu are solutii reale";

    else{

    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);

    if(x1==x2) cout<<"Radacina dubla "<<fixed<<setprecision(2)<<x1;
    else cout<<fixed<<setprecision(2)<<x1<<" "<<fixed<<setprecision(2)<<x2;}

    return 0;
}
