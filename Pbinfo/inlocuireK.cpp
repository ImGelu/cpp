#include <iostream>

using namespace std;

int f(int &n, int k){
    int aux=n, gasit=0;

    while(!gasit){
        if(n%k==0) return n;
        else if(aux%k==0) return aux;
        n--;
        aux++;
    }

}

int main()
{
    int k, n, a[200];

    cin>>k>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        a[i]=f(a[i], k);
    }

    for(int i=n; i>=1; i--) cout<<a[i]<<" ";

    return 0;
}
