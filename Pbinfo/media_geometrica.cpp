#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n, x;
    unsigned long long p=1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        p*=x;
    }

    cout<<fixed<<setprecision(2)<<pow(p, (double)1/n);

    return 0;
}
