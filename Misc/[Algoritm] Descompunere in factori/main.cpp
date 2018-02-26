#include <iostream>

using namespace std;

int main()
{
    int n, nrdiv=1, divizor=2, putere;

    cin>>n;

    while(n>1){
        putere=0;
        while(n%divizor==0){
            putere++;
            n=n/divizor;
        }
        if(putere){ cout<<divizor<<" la puterea "<<putere<<"\n"; nrdiv*=nrdiv+1; }
        divizor++;
    }
    cout<<nrdiv;
    return 0;
}
