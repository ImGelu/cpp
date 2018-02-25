#include <iostream>

using namespace std;

bool palindrom(int n){
    int aux=n, invers=0;
    while(n){
        invers=invers*10+n%10;
        n/=10;
    }
    if(invers==aux) return true;
    return false;
}

void citire(int &n, int a[]){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
}

void afisare(int n, int a[]){
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
}

void eliminare(int a[], int &n){
    bool ok=1;
    while(ok){
    ok=0;
    for(int i=1; i<=n; i++)
        if(palindrom(a[i])){
            for(int j=i; j<=n; j++)
                a[j]=a[j+1];
            ok=1;
            n--;
        }
    }
}

int main()
{
    int a[1000], n;

    citire(n,a);
    eliminare(a,n);
    afisare(n,a);

    return 0;
}