#include <fstream>

using namespace std;

ifstream cin("div3.in");
ofstream cout("div3.out");

int suma_cifre(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main()
{
    int n, a[1000];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(suma_cifre(a[i])%3==0) cout<<a[i]<<" ";
    }



    return 0;
}