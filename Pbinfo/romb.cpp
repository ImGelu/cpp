#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double d1, d2, l;

    cin>>d1>>d2;

    if(d1>d2) swap(d1, d2);

    l=sqrt((d2/2)*(d2/2) + (d1/2)*(d1/2));

    cout<<l*4<<" "<<(d1*d2)/2;
    return 0;
}
