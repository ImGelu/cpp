#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x, y, z;

    cin>>a>>b>>c;

    x=a+b*c;
    y=a*b+c;
    z=b+a*c;

    cout<<max(x, max(y,z));
    return 0;
}