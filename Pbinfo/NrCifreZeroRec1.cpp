#include <iostream>

using namespace std;

int nr_cif_zero(int n, int &f){
    if(n<10)
        if(n==0) return f=1;
            else return f=0;
    else
        if(n%10==0) return f=1+nr_cif_zero(n/10, f);
            else return f=nr_cif_zero(n/10, f);
}

int main()
{
    int n, f;

    cin>>n;

    cout<<nr_cif_zero(n, f);

    return 0;
}
