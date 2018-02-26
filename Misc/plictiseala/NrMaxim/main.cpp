#include <iostream>
#include <math.h>

using namespace std;

int nrcif(int n){
    return log10(n)+1;
}

int nrmaxim(int n){
    int maxim=-1, rez=0, p=1, aux, k=0;

    aux=n;

    while(k<nrcif(n)){
        rez=0;
    while(aux>9){
        rez=aux%10*p+rez;
        p*=10;
        aux/=10;
    }
        rez=rez*10+aux%10;
        //cout<<rez<<" ";
        if(rez>maxim) maxim=rez;
        aux=rez;
        p=1;
        k++;
}
    return maxim;
}

int main()
{
    int n;

    cin>>n;

    cout<<nrmaxim(n);

    return 0;
}
