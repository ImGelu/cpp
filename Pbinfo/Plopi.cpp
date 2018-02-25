#include <iostream>
#include <cmath>
#include <limits.h>

using namespace std;

int x[1001];

int main()
{
    int n, nr=0, difMax=INT_MIN, k=0;
        cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x[i];
    if(i>1 && abs(x[i]-x[i-1])>difMax) difMax = abs(x[i]-x[i-1]);
    }
    for(int i=1; i<=n; i++)
        if(i>1 && abs(x[i]-x[i-1])==difMax) k++;

    cout<<difMax<<" "<<k;
    return 0;
}
