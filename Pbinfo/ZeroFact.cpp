#include <iostream>

using namespace std;

int nz(int n){
    int s=0, div=5;
    while(div<=n){
        s+=(n/div);
        div*=5;
    }
    return s;
}

int main()
{
    int n;

    cin>>n;

    cout<<nz(n);
    return 0;
}
