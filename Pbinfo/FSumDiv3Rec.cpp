#include <iostream>

using namespace std;

int sum3(int a[], int n){
    if(n==0) return 0;
    else if(a[n-1]%3==0) return a[n-1]+sum3(a, n-1);
    else return sum3(a,n-1);
}

int main()
{
    int a[105], n, mini, maxi, sum;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<sum3(a,n);

    return 0;
}
