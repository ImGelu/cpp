#include <iostream>

using namespace std;

int sdiv(int n){
    int s=1;

    for(int i=2; i<=n/2; i++)
        if(n%i==0) s+=i;

    return s;
}

void perfect(int a, int b){
    bool ok=0;
    for(int i=b; i>=a; i--){
        if(i==sdiv(i) && i!=1){ cout<<i<<" "; ok=1;}
    }
    if(ok==0) cout<<"nu exista";
}

int main()
{
    int a, b;

    cin>>a>>b;

    perfect(a, b);
    return 0;
}
