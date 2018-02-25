#include <iostream>
#include <math.h>

using namespace std;

void sortare(int n, int a[]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if((a[i]>=0 && a[j]<0) || (a[i]>0 && a[j]==0) || (a[i]*a[j]>0 && a[i]<a[j])) swap(a[i], a[j]);
}

int main(){

    int n, a[1001];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    sortare(n, a);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}