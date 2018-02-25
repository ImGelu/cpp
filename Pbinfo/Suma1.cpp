#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, s=0, ant=0;
    cin>>x;
    s=s+x;
    while(x!=ant){
        ant=x;
        cin>>x;
        s=s+x;
    }
    cout<<s;
    return 0;
}
