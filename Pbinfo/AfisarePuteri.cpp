#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int p, n, rez=1;
    cin>>p>>n;
    rez=rez*p;
    cout<<1<<" ";
    while(rez<=n){
        cout<<rez<<" ";
        rez=rez*p;

    }
    return 0;
}
