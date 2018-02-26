#include <iostream>
#include <limits.h>

using namespace std;

int cmmmc(int a, int b){
    int auxa=a, auxb=b;
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    return (auxa*auxb)/b;
}


int main()
{
    int n, t, a[500], maxim1=INT_MAX, maxim2=INT_MAX;

    cin>>t;

    for(int i=1; i<=t; i++){

    cin>>n;

    for(int j=1; j<=n; j++){
        cin>>a[j];
        if(a[j]<maxim1) maxim1=a[j];
        else if(a[j]<maxim2) maxim1=maxim2, maxim2=a[j];
    cout<<cmmmc(maxim1, maxim2)<<"\n";
    }
    }

    return 0;
}
