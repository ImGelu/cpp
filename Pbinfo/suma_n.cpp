#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, k=1, x, s=0;
    cin>>n;
    while(k<=n){
        cin>>x;
        s=s+x;
        k++;
    }
    cout<<s;
    return 0;
}
