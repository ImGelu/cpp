#include <iostream>

using namespace std;

int nrcif(int n){
    int nr=0;
    while(n){
        n/=10;
        nr++;
    }
    return nr;
}

int f(int n){
    int k=1;
    for(int i=1; i<=nrcif(n); i++)
        k*=10;
    return k;
}

void dublare1(int &n){
    int nr=n;
    while(n>9) n/=10;
    n=n*f(nr)+nr;
}

int main()
{
    int n;
    cin>>n;

    cout<<dublare1(n);

    return 0;
}
