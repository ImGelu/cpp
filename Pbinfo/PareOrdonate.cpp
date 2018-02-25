#include <iostream>
#include <limits.h>

using namespace std;

    int n, a[1000];

bool f(int n){
    int aux=-20000;
    for(int i=1; i<=n; i++)
    if(a[i]%2==0){
        if(aux>a[i]) return false;
        aux=a[i];
    }
    return true;
}

int main()
{

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    if(!f(n)) cout<<"NU";
    else cout<<"DA";

    return 0;
}
