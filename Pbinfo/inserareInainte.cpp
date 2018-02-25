#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, aux, a[200];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        aux=a[i];
        if((int)sqrt(a[i])==sqrt(a[i])){
            a[i]=sqrt(a[i]);
            a[i+1]=aux;
            n++;
            i++;
        }
    }

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
    return 0;
}
