#include <iostream>

using namespace std;

int sumElemente(int a[100], int n){

if(n==0) return 0;
else return (a[n] + sumElemente(a, n-1));

}

int main()
{
    int n, a[100];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
        cout<<sumElemente(a, n);
    return 0;
}
