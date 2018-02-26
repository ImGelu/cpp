#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,d=0,s=0;
    while(cin>>a && a>0){
    s+=a;
    d++;}
    cout<<fixed<<setprecision(2)<<(float) s/d<<"\n";

    return 0;
}
