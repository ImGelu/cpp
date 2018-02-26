#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<"\n";

    return 0;
}
