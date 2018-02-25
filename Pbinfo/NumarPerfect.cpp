#include <iostream>

using namespace std;

int sdiv(int n){
    int s=1;
    s+=n;

    for(int i=2; i<=n/2; i++)
        if(n%i==0) s+=i;

    return s;
}

int main(){

    int n;

    cin>>n;

    if(2*n==sdiv(n)) cout<<n<<" este perfect";
    else cout<<n<<" nu este perfect";

    return 0;
}