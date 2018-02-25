#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;

    cin>>n;

    a=n%10;
    b=n/10%10;
    c=n/100;

    if(a>b) swap(a, b);
    if(b>c) swap(b, c);
    if(a>b) swap(a, b);

    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
