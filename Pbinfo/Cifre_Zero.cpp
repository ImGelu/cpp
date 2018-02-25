#include <iostream>

using namespace std;

int nr_cif_zero(int n){
    int k=0;
    if(n==0) return 1;
    while(n>0){
        if(n%10==0) k++;
        n=n/10;
    }
    return k;
}

int main()
{
    int n;
    cin>>n;

    cout<<nr_cif_zero(n);
    return 0;
}
