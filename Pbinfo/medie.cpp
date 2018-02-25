#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, n, k=1, par=0;
    double s=0;
    cin>>n;
    while(k<=n){
        cin>>x;
        if(x%2==0){s+=x; par++;}
        k++;
    }
    cout<<s/par;
    return 0;
}
