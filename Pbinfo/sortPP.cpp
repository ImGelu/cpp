#include <iostream>
#include <math.h>

using namespace std;

bool pp(int n){
    if((int)sqrt(n)==sqrt(n)) return true;
    else return false;
}

void sortare(int a, int b, int v[]){
    for(int i=a; i<b; i++)
        for(int j=i+1; j<=b; j++)
            if(v[i]>v[j] && pp(v[i]) && pp(v[j])) swap(v[i], v[j]);
}

int main(){

    int n, a[10005];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    sortare(1, n, a);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}
