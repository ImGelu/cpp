#include <fstream>

using namespace std;

ifstream cin("cifra2.in");
ofstream cout("cifra2.out");

int cifMin(int n){
    int min=10;

    while(n){
        if(n%10<min) min=n%10;
        n/=10;
    }
    return min;
}

int elimCif(int n, int c){
    int nr=0, p=1;
    while(n){
        if(n%10!=c){
            nr=n%10*p+nr;
            p*=10;
        }
        n/=10;
    }
    return nr;
}

int transform(int &n){
    int nr=0, p=1, aux;

    aux=elimCif(n, cifMin(n));

    while(aux){
        nr=(aux%10-cifMin(n))*p+nr;
        p*=10;
        aux/=10;
    }

    n=nr;

    return nr;
}

int main(){

    int n;

    cin>>n;

    cout<<cifMin(n)<<"\n";
    cout<<transform(n)<<"\n";

    while(n>9) n=transform(n);

    cout<<n;

    return 0;
}