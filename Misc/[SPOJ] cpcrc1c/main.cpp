#include <iostream>

using namespace std;

int scifre(int n){
if(n==0) return 0;
else return n%10 + scifre(n/10);
}

int main()
{
    int suma=0, a, b;

    while(a!=-1 && b!=1){
        cin>>a>>b;
        for(int i=a; i<=b; i++) suma += scifre(i);
        cout<<suma<<"\n";
        suma=0;
    }

    return 0;
}
