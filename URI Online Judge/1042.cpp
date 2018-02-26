#include <iostream>

using namespace std;

int main()
{
    int a, b, c, aa, bb, cc;

    cin>>a>>b>>c;

    aa=a;
    bb=b;
    cc=c;

    if(a>b) swap(a, b);
    if(b>c) swap(b, c);
    if(b<a) swap(a, b);

    cout<<a<<"\n"<<b<<"\n"<<c<<"\n\n";
    cout<<aa<<"\n"<<bb<<"\n"<<cc<<"\n";
    return 0;
}
