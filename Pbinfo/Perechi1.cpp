#include <iostream>
#include <cmath>
#include <limits.h>

using namespace std;

int main()
{
    int minim=INT_MAX, x, n, k=0, y, pozitie=0;
        cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x>>y;
        k++;
        if(abs(x-y)<=minim){ minim=abs(x-y); pozitie=k;}
    }
    cout<<pozitie;
    return 0;
}
