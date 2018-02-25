#include <iostream>

using namespace std;

int sum3(int a[100], int n){
    int s=0;

    for(int i=0; i<n; i++)
        if(a[i]%3==0) s+=a[i];

    return s;
}

int main()
{
    int n, a[100];

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<sum3(a,n);
    return 0;
}
