#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned long long n, s=1;
    cin>>n;

    for(int i=1; i<=n; i++){
        s=s*i;
    }
    cout<<(unsigned long long)s;
    return 0;
}
