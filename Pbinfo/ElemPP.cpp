//#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

ifstream cin("elempp.in");
ofstream cout("elempp.out");

int main()
{
    int n, a[100], aux;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        aux=a[i];
        while(aux>99){
            aux/=10;
        }
        if((int)sqrt(aux)==sqrt(aux)) cout<<a[i]<<" ";
    }
    return 0;
}