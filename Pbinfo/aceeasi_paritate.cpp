#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, aux, a[200];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        aux=a[i];
        if(abs(a[i]%2)==abs(a[i-1]%2) && i!=1){
            a[i]=(a[i]+a[i-1])/2;
            a[i+1]=aux;
            n++;
            i++;
        }
    }

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
    return 0;
}
