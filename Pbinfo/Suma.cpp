#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, k=1, x, s=0;
    cin>>x;
    s=s+x;
    while(x!=0){
        cin>>x;
        s=s+x;
        k++;
    }
    cout<<s;
    return 0;
}
