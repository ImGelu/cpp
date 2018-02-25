#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, p1, p2;

    cin>>a>>b>>c;

    p1=ceil((double)a/c);
    p2=ceil((double)b/c);

    cout<<p1*p2;
    return 0;
}
