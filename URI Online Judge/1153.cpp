#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,factorial=1;
    cin>>n;
if(n>0 && n<13)
    for(int i=1; i<=n; i++)
    factorial=factorial*i;
cout<<factorial<<"\n";

    return 0;
}
