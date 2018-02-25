#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n, maxim=INT_MIN, x;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x>maxim) maxim=x;
    }
    cout<<maxim;
    return 0;
}
