#include <iostream>

using namespace std;

int main()
{

    int n, a[810], p=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            for(int k=j+1; k<= n; k++)
    if(a[i]+a[j]>=a[k] && a[k]+a[i]>=a[j] && a[j]+a[k] >=a[i])
            p++;

        }
    }
    cout<<p;

    return 0;
}
