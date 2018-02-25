#include <iostream>

using namespace std;

void sortare(int a, int b, int v[], bool cresc){
    for(int i=a; i<b; i++)
        for(int j=i+1; j<=b; j++)
            if(cresc){
                if(v[i]>v[j]) swap(v[i], v[j]);
            }
            else if(v[i]<v[j]) swap(v[i], v[j]);
}

int main(){

    int n, a[1005], iMax, maxim=-1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]>maxim){
            iMax=i;
            maxim=a[i];
        }
    }

    sortare(1, iMax-1, a, 1);
    sortare(iMax, n, a, 0);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}