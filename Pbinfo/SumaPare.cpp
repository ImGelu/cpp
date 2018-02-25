#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, s=0;
    cin>>n;

    for(int i=1; i<=2*n; i++) if(i%2==0) s=s+i;
    cout<<"Suma este "<<s;
    return 0;
}
