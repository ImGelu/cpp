#include <iostream>

using namespace std;

void sortare(int n, int a[], int b[]){
    for(int i=0; i<n; i++)
        for(int j=i; j<=n; j++){
            if(b[i]>b[j]){
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
            else if(b[i]==b[j] && a[i]>a[j]) swap(a[i], a[j]);
        }
}

int fr[10];

int main(){

    int nr[10], n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        while(x){
            fr[x%10]++;
            x/=10;
        }
    }

    for(int i=0; i<=9; i++) nr[i]=i;

    sortare(9, nr, fr);

    for(int i=0; i<=9; i++)
        if(fr[i]) cout<<nr[i]<<" ";


    return 0;
}