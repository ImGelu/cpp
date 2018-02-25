#include <iostream>

using namespace std;

int invers(int n){
    int rez=0;
    while(n){
        rez=rez*10+n%10;
        n/=10;
    }
    return rez;
}

int main(){

    int n, inv, k=0;
    cin>>n;
    inv=invers(n);

    for(int i=1; i<=inv; i++)
        if(inv%i==0) k++;
        
    cout<<k;
    
    return 0;
}