#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int maxim=INT_MIN, x, n, k=0;
        cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x>maxim){ maxim=x; k=0; }
        if(x==maxim) k++;
    }
    cout<<maxim<<" "<<k;
    return 0;
}
