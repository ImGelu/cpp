#include <iostream>

using namespace std;

int nrElementePare(int a[100], int n){

if(n==0) return 0;
else if(a[n]%2==0) return (1 + nrElementePare(a, n-1));
else return nrElementePare(a, n-1);

}

int main()
{
    int n, a[100];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
        cout<<nrElementePare(a, n);
    return 0;
}
