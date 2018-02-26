#include <iostream>
#include <math.h>

using namespace std;

int putere(int a, int b)
{
    int p=1;
    for(int i=1; i<=b; i++)
        p=p*a;

    return p;
}

int sdiv(int n)
{
    int i=1, s=0;
    while (i<=n/2)

    {
        if (n%i==0) s=s+i;
        i++;
    }
    return s+n;
}

int main()
{

    int a, b, ab;

    cin>>a>>b;
    ab=pow(a, b);

    cout<<sdiv(ab)%9901;

    return 0;
}

