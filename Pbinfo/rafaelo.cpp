#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n, s, x, maxim=INT_MIN, maxM=0;

    cin>>s>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(s/x>maxim) maxim=s/x, maxM=i;
    }

    cout<<(int)maxim<<" "<<maxM;

    return 0;
}
