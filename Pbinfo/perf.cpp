#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    long long x;

    cin>>x;
    if(x<0) cout<<"NU";
    else if(x==0) cout<<"DA";
    else if(sqrt(x)==(long long)(x/sqrt(x))) cout<<"DA";
    else cout<<"NU";
    return 0;
}
