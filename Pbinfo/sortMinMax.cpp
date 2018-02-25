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

    int n, a[1005], iMax, maxim=-1, iMin, minim=1000001;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]>maxim){
            iMax=i;
            maxim=a[i];
        }
        if(a[i]<minim){
            iMin=i;
            minim=a[i];
        }
    }

    if(iMin>iMax) swap(iMin, iMax);

    sortare(iMin, iMax, a, 1);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}