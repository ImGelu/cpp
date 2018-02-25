#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long x;

    cin>>x;
    if(x<0) cout<<"nu";
    else if(x==0) cout<<"da";
    else if(sqrt(x)==(long long)(x/sqrt(x))) cout<<"da";
    else cout<<"nu";
    return 0;
}
