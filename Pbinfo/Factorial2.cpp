#include <iostream>

using namespace std;

int det(int n){
    int rez=1, k=1, prec;

    while(rez<=n){
        prec=rez;
        rez=rez*k;
        k++;
    }
    if(n-prec<=rez-n) return prec;
    return rez;
}

int main()
{
    int n;

    cin>>n;

    cout<<det(n);

    return 0;
}
