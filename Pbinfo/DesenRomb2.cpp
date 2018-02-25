#include <iostream>

using namespace std;

int main()
{
    int n, aux;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int z=1; z<=n-i; z++) cout<<"#";
        for(int j=1; j<=2*i-1; j++){
        cout<<"*";
        aux=j;
        }
        for(int z=aux; z<=n+i-2; z++) cout<<"#";
    cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        for(int z=1; z<=n-i; z++) cout<<"#";
        for(int j=1; j<=2*i-1; j++){
        cout<<"*";
        aux=j;
        }
        for(int z=aux; z<=n+i-2; z++) cout<<"#";
    cout<<endl;
    }

    return 0;
}
