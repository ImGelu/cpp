#include <iostream>

using namespace std;

    int fact(int n){
        int p=1;
    for(int i=1; i<=n; i++) p*=i;
        return p;
    }

    int sumfactcif(int n){
        int s=0;
        if(n==0) return 1;
        else{
        while(n>0){
            s+=fact(n%10);
            n=n/10;
        }
    return s;
        }
    }

int main()
{
    int n;
    cin>>n;

    cout<<sumfactcif(n);
    return 0;
}
