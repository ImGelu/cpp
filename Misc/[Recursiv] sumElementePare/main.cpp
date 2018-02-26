#include <iostream>

using namespace std;

int sumElementePare(int a[100], int n){

if(n==0) return 0;
else if(a[n]%2==0) return (a[n] + sumElementePare(a, n-1));
else return sumElementePare(a, n-1);

}

int main()
{
    int n, a[100];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
        cout<<sumElementePare(a, n);
    return 0;
}
