#include <iostream>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2)
        if(n%i==0) return false;
    return true;
}

int nr_prim(int n){
        n++;
    while(!prim(n)){
        n++;
    }
    return n;
}

int main()
{
    int n;
    cin>>n;

    cout<<nr_prim(n);

    return 0;
}
