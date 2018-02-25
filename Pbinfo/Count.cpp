#include <iostream>

using namespace std;

double medie(double a[100], int n){
    int s=0;
    for(int i=0; i<n; i++)
        s+=a[i];
    return s/n;
}

int count(double a[100], int n){
    int k=0;
    for(int i=0; i<n; i++)
        if(a[i]>=medie(a,n)) k++;

    return k;
}

int main()
{
    double a[100];
    int n;

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    cout<<count(a,n);
    return 0;
}
