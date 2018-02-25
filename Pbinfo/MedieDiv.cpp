#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void nrdiv(int n, int &k, int &s){
    s=1+n, k=2;

    for(int i=2; i<=n/2; ++i)
        if(n%i==0) s+=i, k++;

}

int main()
{
    int n, s, k;

    cin>>n;

    nrdiv(n,k,s);

    cout<<setprecision(2)<<fixed<<(double)s/k;

    return 0;
}