#include <iostream>

using namespace std;

bool isMunte(int n){
    int aux=n;
    bool munte=1;

    ///primul sir
    while(n>9 && n%10<(n/10)%10) n=n/10;
    if(n==aux || n<10) munte=0;

    ///al doilea sir
    while(n>9 && n%10>(n/10)%10) n=n/10;
    if(n>9) munte=0;

    if(munte==1) return true;

    return false;
}

int main()
{
    int t, n;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n;
        cout<<isMunte(n)<<"\n";
    }
    return 0;
}