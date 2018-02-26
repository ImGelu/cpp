#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    ///Euclid: daca (2^n) - 1 este numar prim, atunci (2^n-1)(2^n)-1 este nr perfect
    int n, cnt=0;
    bool ciur[10000];

    cin>>n;
    for(int i=2; i<=n; i++){
        if(ciur[i]==0){
        cout<<(pow(2,i-1))*(pow(2,i)-1)<<" ";

    for(int j=i+i; j<=n; j=j+i)
        ciur[j]=1;
    }
    }
    return 0;
}
