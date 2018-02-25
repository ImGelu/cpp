#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, a[1001], k=1;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];

    while(k<=n/2){
        cout<<a[k]<<" "<<a[n-k+1]<<" ";
        k++;
    }
    if(n%2==1) cout<<a[(int)round((double)n/2)];
    return 0;
}
