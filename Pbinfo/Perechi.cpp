#include <iostream>
#include <cmath>
#include <limits.h>

using namespace std;

int main()
{
    int minim=INT_MIN, x, n, k=0, y, pozitie1=0, pozitie2=0;
        cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x>>y;
        k++;
        if(abs(x-y)>minim){ minim=abs(x-y); pozitie1=x; pozitie2=y;}
    }
    cout<<pozitie1<<" "<<pozitie2;
    return 0;
}
