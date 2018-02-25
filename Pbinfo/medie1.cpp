#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c, medie;

    cin>>a>>b>>c;
    medie=(double)(a+b+c)/3;
    if((int)medie==(double)medie) cout<<fixed<<setprecision(2)<<medie;
    else cout<<floor(medie*100)/100.0;
    return 0;
}
